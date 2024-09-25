#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

#define TMin INT_MIN
#define TMax INT_MAX

#include "btest.h"
#include "bits.h"

test_rec test_set[] = {

 {"tmax", (funct_t) tmax, (funct_t) test_tmax, 0, "! ~ & ^ | + << >>", 2, 1,
  {{TMin, TMax},{TMin,TMax},{TMin,TMax}}},

 {"bitNor", (funct_t) bitNor, (funct_t) test_bitNor, 2, "& ~", 8, 2,
  {{TMin, TMax},{TMin,TMax},{TMin,TMax}}},

 {"bitCount", (funct_t) bitCount, (funct_t) test_bitCount, 1, "! ~ & ^ | + << >>", 40, 2,
  {{TMin, TMax},{TMin,TMax},{TMin,TMax}}},

 {"absVal", (funct_t) absVal, (funct_t) test_absVal, 1,
    "! ~ & ^ | + << >>", 6, 3,
  {{TMin, TMax},{TMin,TMax},{TMin,TMax}}},

 {"logicalShift", (funct_t) logicalShift, (funct_t) test_logicalShift, 2,
    "! ~ & ^ | + << >>", 20, 4,
  {{TMin, TMax},{0,31},{TMin,TMax}}},

 {"isLessOrEqual", (funct_t) isLessOrEqual, (funct_t) test_isLessOrEqual, 2,
    "! ~ & ^ | + << >>", 24, 4,
  {{TMin, TMax},{TMin,TMax},{TMin,TMax}}},

 {"getByte", (funct_t) getByte, (funct_t) test_getByte, 2,
    "! ~ & ^ | + << >>", 6, 2,
  {{TMin, TMax},{0,3},{TMin,TMax}}},

 {"roundUp", (funct_t) roundUp, (funct_t) test_roundUp, 1, "! ~ & ^ | + << >>", 8, 3,
  {{TMin, TMax},{TMin,TMax},{TMin,TMax}}},

 {"swapOddandEven", (funct_t) swapOddandEven, (funct_t) test_swapOddandEven, 1,
    "! ~ & ^ | + << >>", 18, 4,
  {{TMin, TMax},{TMin,TMax},{TMin,TMax}}},

 {"secondLowBit", (funct_t) secondLowBit, (funct_t) test_secondLowBit, 1,
    "! ~ & ^ | + << >>", 8, 4,
  {{TMin, TMax},{TMin,TMax},{TMin,TMax}}},

 {"rotateNBits", (funct_t) rotateNBits, (funct_t) test_rotateNBits, 2, "! ~ & ^ | + << >>", 10, 5,
  {{TMin, TMax},{0,TMax},{TMin,TMax}}},

 {"fractions", (funct_t) fractions, (funct_t) test_fractions, 1, "! ~ & ^ | + << >>", 8, 5,
  {{0, 268435456},{TMin,TMax},{TMin,TMax}}},

 {"overflowCalc", (funct_t) overflowCalc, (funct_t) test_overflowCalc, 3,
    "! ~ & ^ | + << >>", 30, 7,
  {{TMin, TMax},{TMin,TMax},{TMin,TMax}}},

 {"mul3", (funct_t) mul3, (funct_t) test_mul3, 1,
    "! ~ & ^ | + << >>", 30, 7,
  {{TMin, TMax},{TMin,TMax},{TMin,TMax}}},

//float
 {"float_abs", (funct_t) float_abs, (funct_t) test_float_abs, 1,
    "$", 20, 3,
     {{1, 1},{1,1},{1,1}}},
 {"float_i2f", (funct_t) float_i2f, (funct_t) test_float_i2f, 1,
    "$", 40, 7,
     {{1, 1},{1,1},{1,1}}},
 {"float_half", (funct_t)float_half, (funct_t)test_float_half, 1, 
    "$", 32, 4, {{1, 1},{1,1},{1,1}}},


 {"oddParity", (funct_t) oddParity, (funct_t) test_oddParity, 1, "! ~ & ^ | + << >>", 56, 2,
  {{TMin, TMax},{TMin,TMax},{TMin,TMax}}},


  {"", NULL, NULL, 0, "", 0, 0,
   {{0, 0},{0,0},{0,0}}}
};
