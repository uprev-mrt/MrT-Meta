/*
 * ack_spool.c
 *
 * Created: 1/15/2019 9:34:25 AM
 *  Author: JasonBerger
 */

#include "spool.h"

#define RANDOM_INT rand()

#define SPOOL_LOCK c->mLock = 1
#define SPOOL_UNLOCK c->mLock = 0

void spool_init(spool_t* c, int objSize, int len)
{

   c->mSize = len;
   c->mObjSize = objSize;
   c->mReadyCount = 0;
   c->mTimeOut = 500;
   c->mMaxRetries = 10;
   c->mLock = false;
   c->mSuccessfulMessages=0;
   c->mFailedMessages =0;
   c->mStatusFlags =0;

}

void spool_deinit(spool_t* c)
{
   free(c->mObjects);
   free(c->mEntries);
}


/**
  *@brief gets next entry in spool with mState == state
  *@param c - pointer to spool_t
  *@param state - state to look for
  *@return index of entry, or -1 if none are found
  */
int spool_get_next(spool_t* c, uint8_t state)
{
  int ret = -1;
  for(int i=0; i < c->mSize; i ++)
  {
    if(c->mEntries[i].mState == state)
    {
      ret =i;
      break;
    }
  }

  return ret;
}

/**
  *@brief add object to spool
  *@param c - pointer to spool struct
  *@param data - pointer to data object
  *@param timeout - timeout for
  *@pre "Pre-conditions"
  *@post "Post-conditions"
  *@return "Return of the function"
  */
void spool_push(spool_t* c, void* data, uint8_t ackType, SPOOL_TOKEN_TYPE token)
{
  SPOOL_LOCK;
  //get the next free entry
  int ind = spool_get_next(c,SPOOL_STATE_FREE);
  spool_entry_t* entry;
  if(ind >= 0)
  {
    entry = &c->mEntries[ind];

    entry->mTimeOut = 0;
    entry->mTimeOutReset = c->mTimeOut;
    entry->mState = SPOOL_STATE_READY;
    entry->mAttempts = 0;
    entry->mAckType = ackType;

    entry->mAckToken = token;

    c->mReadyCount++;  //decrement ready count

    memcpy(&c->mObjects[ind * c->mObjSize], data, c->mObjSize);
  }
  else
  {
    c->mStatusFlags |= SPOOL_FLAG_OVERFLOW;
  }

  SPOOL_UNLOCK;
}


/**
  *@brief pull next message/ obj that has the state SPOOL_STATE_READY
  *@param c - pointer to spool
  *@param data - pointer to data to copy obj to
  *@param token - pointer used to return the ack token
  *@return index of entry, or -1 if no entries are ready
  */
int spool_pop(spool_t* c, void* data, SPOOL_TOKEN_TYPE* token)
{

  SPOOL_LOCK;

  //get the next entry ready to send
  int ind = spool_get_next(c,SPOOL_STATE_READY);
  int ret = ind;
  uint16_t newToken = 0;
  spool_entry_t* entry;
  if(ind != SPOOL_ERROR)
  {
    entry = &c->mEntries[ind];

    while(newToken == 0)
    {
      newToken= ((SPOOL_TOKEN_TYPE) RANDOM_INT) & SPOOL_TOKEN_MASK;
    }

    //if the ack type is token, we assign a new random token
    if((entry->mAckType) == ACK_TYPE_TOKEN)
    {

      //create new random ack token
      *token = newToken | SPOOL_TOKEN_ACK_REQ;

      entry->mAckToken = newToken;                      //set token
      entry->mTimeOut = entry->mTimeOutReset;  //reset timeout
      entry->mState = SPOOL_STATE_WAITING;            //set state to waiting for ack
      entry->mAttempts++;                             //count attempts
    }
    else
    {
      //if we dont need an ack, free the entry
      *token = entry->mAckToken;
      entry->mState = SPOOL_STATE_FREE;
    }

    c->mReadyCount--;  //decrement ready count

    //copy obj out to data
    memcpy(data, &c->mObjects[ind * c->mObjSize], c->mObjSize);
    ret = SPOOL_OK;
  }
  else
  {
    c->mStatusFlags |= SPOOL_FLAG_UNDERFLOW;
  }

  SPOOL_UNLOCK;
  return ret;
}


/**
  *@brief notifies the spool of an ack token received, and frees the entry waiting for it
  *@param c - pointer to spool
  *@param ack_token - token to process
  */
void spool_ack(spool_t* c, SPOOL_TOKEN_TYPE ack_token)
{
  //if the token is 0 or is an ack request, we ignore it
  if((ack_token == 0) || (ack_token & SPOOL_TOKEN_ACK_REQ))
  {
    return;
  }

  SPOOL_LOCK;
  for(int i=0; i < c->mSize; i++)
  {
    if( (c->mEntries[i].mState == SPOOL_STATE_WAITING ) && (c->mEntries[i].mAckToken == ack_token))
    {
      c->mEntries[i].mState = SPOOL_STATE_FREE;
      break;
    }
  }
  SPOOL_UNLOCK;
}

/**
  *@brief updates time for spool
  */
void spool_tick(spool_t* c, int ms)
{
  SPOOL_LOCK;
  spool_entry_t* entry;
  for(int i=0; i < c->mSize; i++)
  {
    entry = &c->mEntries[i];
    if(entry->mState == SPOOL_STATE_WAITING)
    {
      entry->mTimeOut -= ms;
      if(entry->mTimeOut <= 0)
      {
        if(entry->mAttempts < c->mMaxRetries)
        {
          entry->mState = SPOOL_STATE_READY;
          c->mReadyCount++;
        }
        else //if we max out our retries, free the slot and note a failed message
        {
          entry->mState = SPOOL_STATE_FREE;
          c->mFailedMessages++;
        }
      }
      break;
    }
  }
  SPOOL_UNLOCK;
}
