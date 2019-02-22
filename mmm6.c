#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

#define SZ 100000

static void mmm6(int *array, int size, int *min, int *max, double *mean) {
  // TBD
}

int main(int argc, char *argv[]) {
  int data[SZ];
  int i;
  int min;
  int max;
  double mean;
  for (i = 0; i < SZ; i++) data[i] = i % 100 + 100;
  mmm6(data, SZ, &min, &max, &mean);
  printf("Min=%d Max=%d Mean=%.2f\n", min, max, mean);
  return 0;
}
