// Program to Find the sum of N numbers in an array.

#include <stdio.h>

int main() {
  int size;

  printf("enter the size of array: ");
  scanf("%d", &size);

  double arr[size];
  double sum = 0;
  int i = 0, j = 0;

  printf("Enter the size of elements: ");
  while (i < size) {
    scanf("%lf", &arr[i]);
    i++;
  }
  while (j < size) {
    sum += arr[j];
    j++;
  }
  printf("sum of %d number is : %0.2lf", size, sum);
}