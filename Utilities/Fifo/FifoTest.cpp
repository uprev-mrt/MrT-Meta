#include "Fifo.cpp"
#include <gtest/gtest.h>

TEST(FifoTest, FifoTest0)
{
  Fifo testFifo(sizeof(int),64);
  int comp;

  for(int i=0; i < 64; i++)
  {
    testFifo.push(&i);
  }

  for(int i = 0; i < 64; i++)
  {
    testFifo.pop(&comp);
    ASSERT_EQ(comp,i);
  }
}
