
#ifdef UNIT_TESTING_ENABLED

#include "Blob.cpp"
#include <gtest/gtest.h>



//Test pushing data to Fifo
TEST(BlobTest, test)
{
  Blob intTest = Blob::create<int>();
  int comp;

  intTest.set<int>(500);

  comp = intTest.get<int>();

  ASSERT_EQ(comp,500);
}

#endif
