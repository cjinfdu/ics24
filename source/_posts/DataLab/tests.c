/* Testing Code */

#include <limits.h>
#include <math.h>

/* Routines used by floation point test code */

/* Convert from bit level representation to floating point number */
float u2f(unsigned u) {
  union {
    unsigned u;
    float f;
  } a;
  a.u = u;
  return a.f;
}

/* Convert from floating point number to bit-level representation */
unsigned f2u(float f) {
  union {
    unsigned u;
    float f;
  } a;
  a.f = f;
  return a.u;
}

int test_bitNand(int x, int y){
  return ~(x&y);
}

int test_getByte(int x,int y){
  union tests
  {
    int a;
    char b[4];
  }t;
  t.a = x;
  return 0xff&(int)t.b[y];
}

int test_roundUp(int x){
  if(x < 0){
    return x - x%256;
  }else{
    if(x%256 == 0)
      return x;
    else 
      return x - x%256 + 256;
  }
}

int test_swapOddandEven(int x){
    int result = 0;
    for (int i = 0; i < 32; i += 2) {
        unsigned int evenBit = (x >> i) & 1;
        unsigned int oddBit = (x >> (i + 1)) & 1;
        
        result |= (evenBit << (i + 1));
        result |= (oddBit << i);
    }
    return result;
}

int test_rotateNBits(int x, int n){
  n = n%32;
  int left_part = x<<n;
  int right_part = (unsigned int)x>>(32 - n);
  return (left_part|right_part);
}

int test_fractions(int x){
  return x*7/16;
}
int test_secondLowBit(int x){
  int y=x-(x&-x);
  return y&(-y);
}
int test_hdOverflow(int x,int y){
  long long res=(long long)x+(long long)y;
  return res>2147483647||res<-2147483648;
}

int test_overflowCalc(int x, int y, int z){
  union tests
  {
    int a;
    unsigned b;
  }u,v,w;
  u.a=x;
  v.a=y;
  w.a=z;
  long long res=(long long)u.b+(long long)v.b+(long long)w.b;
  return res>>32;
}

unsigned test_float_abs(unsigned uf) {
  float f = u2f(uf);
  if (isnan(f))
    return uf;
  if(f==0&&uf>>31)return 0;
  return f<0?f2u(-f):uf;
}

unsigned test_float_i2f(int x) {
  float f = (float) x;
  return f2u(f);
}

int test_oddParity(int x){
  int answer=0;
  for(int i=1;i<=32;++i){
    answer+=x%2;
    x>>=1;
  }
  return answer%2?0:1;
}

int test_bitNor(int x, int y){
  return ~(x|y);
}

int test_tmax(void) {
  return 0x7fffffff;
}

int test_absVal(int x){
  return x<0?-x:x;
}

int test_isLessOrEqual(int x, int y){
  return x <= y;
}

int test_bitCount(int x) {
  int result = 0;
  int i;
  for (i = 0; i < 32; i++)
    result += (x >> i) & 0x1;
  return result;
}

int test_mul3(int x){
  if(x > 0x7fffffff/3)
    return 0x7fffffff;
  else if(x < (int)0x80000000/3)
    return 0x80000000;
  else 
    return x*3;
}

int test_logicalShift(int x, int n) {
  unsigned u = (unsigned) x;
  unsigned shifted = u >> n;
  return (int) shifted;
}

unsigned test_float_half(unsigned uf) {
  float f = u2f(uf);
  float tf = f/2;
  if (isnan(f))
    return uf;
  else
    return f2u(tf);
}
