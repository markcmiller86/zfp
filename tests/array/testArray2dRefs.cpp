#include "array/zfparray2.h"
using namespace zfp;

extern "C" {
  #include "utils/hash64.h"
  #include "utils/rand64.h"
};

#define ARRAY_DIMS_SCALAR_TEST Array2dTest
#define ARRAY_DIMS_SCALAR_TEST_REFS Array2dTestRefs

#include "utils/gtest2dTest.h"

#include "testArrayRefsBase.cpp"
#include "testArray2RefsBase.cpp"
