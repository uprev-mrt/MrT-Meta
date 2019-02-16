/*!
   \@file fifo.h
   \@brief header file for spi fifo buffer
   \@author Jason Berger
   \@date 05/03/2017
*/

#pragma once
#include <string.h>
#include <stdint.h>


/**
 *@brief creates fifo
 *@param x : name of fifo buffer
 *@param y : max number of elements in buffer
 *@param z : datatype
 *@return "Return of the function"
 */
#define FIFO_DEF(x,y,z)          \
  uint8_t x##_data[y*sizeof(z)];     \
  fifo_t x = {               \
        .mBuffer = x##_data,      \
        .mHead = 0,                \
        .mTail = 0,                \
        .mMaxLen = y,              \
        .mCount = 0,                \
        .mObjSize = sizeof(z)	 \
    };

typedef struct {
    uint8_t *  mBuffer; //pointer to data buffer
    int mHead;      //next address to write to
    int mTail;      //next address to read from
    int mCount;     //number of items in fifo
    int mObjSize;   //size of obj in buffer
    int mMaxLen;
    uint8_t mLock;     //lock for fifo that is accessed by multiple threads
} fifo_t;

#ifdef __cplusplus

class Fifo : public fifo_t
{
	public:
		Fifo(int objSize, int len);
    ~Fifo();
    int push(void* data);
    int pop( void* data);
    int pushBuffer( void* data, int len);
    int popBuffer( void* data, int len);
    int clear();
    int peek(void* data, int idx);

    int Count() const {return mCount;}
  private:
#ifdef URB_MUTEX_TYPE
    URB_MUTEXT_TYPE mMutex;
#endif

};

extern "C"
{
#endif

void fifo_init(fifo_t* c, int objSize, int len);
void fifo_destroy(fifo_t* c);
int fifo_push(fifo_t *c, void* data);
int fifo_pop(fifo_t *c, void* data);
int fifo_push_buf(fifo_t *c, void* data, int len);
int fifo_pop_buf(fifo_t *c, void* data, int len);
int fifo_clear(fifo_t *c);
int fifo_peek(fifo_t *c, void* data, int idx);

#ifdef __cplusplus
}
#endif
