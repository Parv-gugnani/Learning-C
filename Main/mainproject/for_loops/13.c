// Calculate the sum of the series 1 +11 + 111 + 1111 + .. n terms
#include <stdio.h>

int main() {
  int i, n;
  long int sum = 0;
  long int t = 1;
  printf("Input the number of terms: ");
  scanf("%d", &n);

  for (i = 1; i <= n; i++) {
    printf("%ld  ", t);
    if (i < n) {
      printf("+ ");
    }
    sum = sum + t;
    t = (t * 10) + 1;
  }
  printf("\nThe sum is : %ld\n", sum);
}