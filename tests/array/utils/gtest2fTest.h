#include "gtest/gtest.h"

extern "C" {
  #include "constants/universalConsts.h"
};

#define SCALAR float

const uint ARRAY_SIZE_X = 11;
const uint ARRAY_SIZE_Y = 5;

class Array2fTest : public ::testing::Test {
public:
  uint IterAbsOffset(array2f::iterator iter) {
    return iter.i() + ARRAY_SIZE_X * iter.j();
  }

protected:
  virtual void SetUp() {
    arr.resize(ARRAY_SIZE_X, ARRAY_SIZE_Y, true);
    arr2.resize(ARRAY_SIZE_X, ARRAY_SIZE_Y, true);

    arr.set_rate(ZFP_RATE_PARAM_BITS);
    arr2.set_rate(ZFP_RATE_PARAM_BITS);
  }

  static array2f arr, arr2;
  static array2f::pointer ptr, ptr2;
  static array2f::iterator iter, iter2;
};

array2f Array2fTest::arr(ARRAY_SIZE_X, ARRAY_SIZE_Y, ZFP_RATE_PARAM_BITS);
array2f Array2fTest::arr2(ARRAY_SIZE_X, ARRAY_SIZE_Y, ZFP_RATE_PARAM_BITS);
array2f::pointer Array2fTest::ptr, Array2fTest::ptr2;
array2f::iterator Array2fTest::iter, Array2fTest::iter2;
