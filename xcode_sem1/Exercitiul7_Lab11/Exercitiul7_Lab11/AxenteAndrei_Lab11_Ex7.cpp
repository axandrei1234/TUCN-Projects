/*
 * Fufezan Mihai, Axente Andrei, 2115, lab11, ex 07
 *
 * Write a C/C++ application that allocates the necessary amount of memory for
 * storing 10,000 integer numbers. The program automatically initializes the
 * numbers with random values between 1 and 100 (use the library functions
 * srand() and/or rand() in VC++). Write a function that displays the most 10
 * frequently numbers and the number of their appearances in the initial array.
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void top10(int *, int);
int compare(void const *, void const *);

typedef struct {
  int i;
  int v;
} Pair;

int main() {
  srand(time(0));

  // alloc
  int *v = (int *)malloc(sizeof(int) * 10000);

  // generate
  for (int i = 0; i < 10000; i++)
    v[i] = rand() % 101;

  // display the top 10 numbers
  top10(v, 10000);

  // dealloc
  free(v);
}
