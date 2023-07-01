// Program to Find the sum of N numbers in an array.

#include <stdio.h>

int main() {
  int n, i, sum;
  int mn, mx;

  printf("Input the number: ");
  scanf("%d", &n);
  sum = 0;

  printf("The postive divisor: ");
  for (i = 1; i < n; i++) {
    if (n % i == 0) {
      sum = sum + i;
      printf("%d ", i);
    }
  }
  printf("\nThe sum of divisor is: %d", sum);
  if (sum == n)
    printf("\nSo, the number is perfect.");
  else
    printf("\n the number is not perfect");

  printf("\n");
}
