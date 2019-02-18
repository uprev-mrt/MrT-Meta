/*!
   \@file Blob.h
   \@brief A Class that can contain various types of data
   \@author Jason Berger
   \@date 02/16/2019
*/

#pragma once
#include <string.h>
#include <stdint.h>


#ifdef __cplusplus

namespace Utilities
{

/**
  *@brief A Class that can contain various types of data
  */
class Blob
{
	public:
		Blob(uint32_t objSize, uint32_t count);
    ~Blob();

    template<typename T> static Blob create(uint32_t count =0)
    {
        return Blob(sizeof(T), count);
    }

    template <typename T> T get(uint32_t idx =0);
    template <typename T> void set(T val);
    template <typename T> void set(uint32_t idx, T val);

    uint8_t* mBuffer;
    uint32_t mCount;
    uint32_t mObjSize;
  private:
};

}
#endif
