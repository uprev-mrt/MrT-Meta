/*
 * ack_spool.h
 *
 * Created: 1/15/2019 9:34:53 AM
 *  Author: JasonBerger
 *
 *
 *  This module defines a spool object, which holds objects and adds a state to them with timeouts.
 *
 *  Items are pushed to the spool like a fifo but they are not garunteed to pop in any specific order
 *
 *  Objects are retrieved from the spool with spool_pop(spool_t* c, void* data,  SPOOL_TOKEN_TYPE* token)
 *      The spool will search for the next object that has a state of SPOOL_STATE_READY
 *      then it will memcpy the object to <data> and create a new random token at <token>
 *      If the object requires an ack it will set the state to SPOOL_STATE_WAITING, otherwise it will free the slot (SPOOL_STATE_FREE)
 *
 *  In the case of messaging, the request flag is set in the token and is passed with the message
 *  when the receiver responds to the message, it includes the same token (without the request flag)
 *  when the response gets back to the sender it calls spool_ack() and passes it the token
 *  the spool will search for any objects in the SPOOL_STATE_WAITING state to find a matching token and then free that slot in the spool
 *
 *  spool_tick() allows time differences to be passed to the spool. for instance you can set a timer to call spool_tick(100) every 100 ms
 *  when spool_tick is called it will decrease the timeout value for each entry in the SPOOL_STATE_WAITING state. If the mTimeOut goes below 0,
 *    the state will be set to SPOOL_STATE_READY so that it can be sent again
 */

#pragma once


#include <string.h>
#include <stdint.h>

#define SPOOL_TOKEN_TYPE uint16_t
#define SPOOL_TOKEN_MASK 0x7FFF
#define SPOOL_TOKEN_ACK_REQ 0x8000

#define SPOOL_OK    0
#define SPOOL_ERROR -1

#define SPOOL_FLAG_OVERFLOW 0x80
#define SPOOL_FLAG_UNDERFLOW 0x40


#define SPOOL_STATE_FREE 0			//Entry is unused
#define SPOOL_STATE_READY 1			//Entry is ready to send
#define SPOOL_STATE_WAITING 2		//Entry was sent and is waiting for an ack or to timeout for a retry

//ack types
#define ACK_TYPE_NONE         0 //no ack needed
#define ACK_TYPE_TOKEN        1 //request ack via token
#define ACK_TYPE_PASSTHROUGH  2 //pass through message, dont touch the token

#define SPOOL_DEF(x,y,z)                    \
 volatile spool_entry_t x##_entries[y];             \
 volatile z x##_objects[y];                         \
 volatile spool_t x = {                             \
    .mEntries = x##_entries,                \
    .mObjects = (uint8_t*)x##_objects,      \
    .mObjSize = sizeof(z),                   \
    .mSize = y,                              \
    .mReadyCount =0,                         \
    .mTimeOut = 1500,                         \
    .mMaxRetries = 10,                       \
    .mLock = false,                          \
    .mSuccessfulMessages=0,                  \
    .mFailedMessages =0,                     \
    .mStatusFlags =0                        \
  };                                        \

  typedef struct{
    uint8_t mState;
    int mTimeOut;
    int mTimeOutReset;
    SPOOL_TOKEN_TYPE mAckToken;
    int mAttempts;
    uint8_t mAckType;
  } spool_entry_t;

  typedef struct{
    uint8_t* mObjects;
    spool_entry_t* mEntries;
    int mObjSize;
    int mSize;
    int mReadyCount;
    int mTimeOut;
    int mMaxRetries;
    uint8_t mLock;
    //used for debugging
    int mSuccessfulMessages;
    int mFailedMessages;
    int mStatusFlags;
  }spool_t;

#ifdef __cplusplus
extern "C"
{
#endif

/**
  *@brief initializes the spool
  *@param c - pointer to spool_t
  *@param objsize size of object stored in spool
  *@param len number of objects that spool can hold
  */
void spool_init(spool_t* c, int objSize, int len);
void spool_deinit(spool_t* c);

/**
  *@brief gets next entry in spool with mState == state
  *@param c - pointer to spool_t
  *@param state - state to look for
  *@return index of entry, or -1 if none are found
  */
int spool_get_next(spool_t* c, uint8_t state);

/**
  *@brief add object to spool
  *@param c - pointer to spool struct
  *@param data - pointer to data object
  *@param timeout - timeout for
  *@pre "Pre-conditions"
  *@post "Post-conditions"
  *@return "Return of the function"
  */
void spool_push(spool_t* c, void* data, uint8_t ackType, SPOOL_TOKEN_TYPE token );

/**
  *@brief pull next message/ obj that has the state SPOOL_STATE_READY
  *@param c - pointer to spool
  *@param data - pointer to data to copy obj to
  *@param token - pointer used to return the ack token
  *@return index of entry, or -1 if no entries are ready
  */
int spool_pop(spool_t* c, void* data,  SPOOL_TOKEN_TYPE* token);

/**
  *@brief notifies the spool of an ack token received, and frees the entry waiting for it
  *@param c - pointer to spool
  *@param ack_token - token to process
  */
void spool_ack(spool_t* c, SPOOL_TOKEN_TYPE ack_token);

/**
  *@brief updates time for spool
  */
void spool_tick(spool_t* c, int ms);

#ifdef __cplusplus
}
#endif
