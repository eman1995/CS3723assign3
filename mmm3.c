#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

#define SZ 100000

typedef struct MMM {
  int min;
  int max;
  double mean;
} mmm_t;

static mmm_t *mmm3(int *array, int size) {
  static mmm_t mmm;
  // TBD
  return &mmm;
}

int main(int argc, char *argv[]) {
  int data[SZ];
  int i;
  for (i = 0; i < SZ; i++) data[i] = i % 100 + 100;
  mmm_t *mmm = mmm3(data, SZ);
  printf("Min=%d Max=%d Mean=%.2f\n", mmm->min, mmm->max, mmm->mean);
  return 0;
}
