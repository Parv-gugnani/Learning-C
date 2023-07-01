// C Exercises: Read and Print elements of an array
#include <stdio.h>

void main() {
  int arr[10];
  int i;

  printf("Input the element of array:\n");
  for (i = 0; i < 10; i++) {
    printf("element - %d: ", i);
    scanf("%d", &arr[i]);
  }
  printf("Element in array are:");
  for (i = 0; i < 10; i++) {
    printf("%d", arr[i]);
  }
  printf("\n");
}