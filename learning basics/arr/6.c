// C Exercises: Find the sum of all elements of an array

#include <stdio.h>

void main() {
  int a[100];
  int i, n, sum = 0;
  printf("Input the number of elements:");
  scanf("%d", &n);

  printf("Input %d elements in the array:\n", n);
  for (i = 0; i < n; i++) {
    printf("elements - %d: ", i);
    scanf("%d", &a[i]);
  }

  for (i = 0; i < n; i++) {
    sum += a[i];
  }

  printf("sum of all: %d", sum);
}