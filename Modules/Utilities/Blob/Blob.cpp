
#include <stdlib.h>
#include "Blob.h"

Blob::Blob(uint32_t objSize, uint32_t count)
{
  mObjSize = objSize;
  mCount = count;
  mBuffer = (uint8_t*) malloc(mObjSize * mCount);
}


Blob::~Blob()
{
  free(mBuffer);
}


template <typename T>
T Blob::get(uint32_t idx)
{
  T retVal;

  if((sizeof(T) == mObjSize) && (idx < mCount))
  {
    memcpy((void*)&retVal, (void*)&mBuffer[mObjSize*idx], sizeof(T));
  }

  return retVal;

}

template <typename T>
void Blob::set(T val)
{
  if(sizeof(T) == mObjSize)
  {
    memcpy((void*)mBuffer, (void*)&val, sizeof(T));
  }
}

template <typename T>
void Blob::set(uint32_t idx, T val)
{
  if((sizeof(T) == mObjSize) && (idx < mCount))
  {
    memcpy((void*)&mBuffer[mObjSize*idx], (void*)&val, sizeof(T));
  }
}
