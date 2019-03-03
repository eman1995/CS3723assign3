#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

#define SZ 100000

#define mmm7(ar, sz, mn, mx, me) \
  mn = INT_MAX; \
  mx = INT_MIN; \
  double sum = 0; \
  for(i = 0; i < sz; i++){ \
    sum += ar[i]; \
    if(ar[i] < mn ) \
        mn = ar[i]; \
    if(ar[i] > mx ) \
        mx = ar[i]; \
    } \
  me = sum / SZ; \
    
int main(int argc, char *argv[]) {
  int data[SZ];
  int i;
  int min;
  int max;
  double mean;
  for (i = 0; i < SZ; i++) data[i] = i % 100 + 100;
  mmm7(data, SZ, min, max, mean);
  printf("Min=%d Max=%d Mean=%.2f\n", min, max, mean);
  return 0;
}
