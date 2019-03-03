#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

#define SZ 100000

static void mmm6(int *array, int size, int *min, int *max, double *mean) {
    int i;
    *min = array[0];
    *max = array[0];
    for ( i = 0; i < size; i++){
        if ( array[i] < *min )
            *min = array[i];
        if ( array[i] > *max )
            *max = array[i];
        *mean += array[i];
    }
    *mean = *mean / size;
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
