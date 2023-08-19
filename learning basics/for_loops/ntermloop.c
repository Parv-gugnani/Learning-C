#include <stdio.h>
int main() {
  int i, n;
  int sum = 0;
  printf("Input value of terms: ");
  scanf("%d", &n);

  printf("\nThe First %d natural number are:\n", n);
  for (i = 1; i <= n; i++) {
    printf("%d ", i);
    sum += i; //+= add the value to the right operand
  }

  printf("\nThe Sum of Natural number upto %d terms: %d \n", n, sum);
}