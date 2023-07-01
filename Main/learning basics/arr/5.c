// C Exercises
//     : Read n number of values in an array and display it in reverse order
#include <stdio.h>

void main() {
  int i, n, a[100];

  printf("Input the number of array:");
  scanf("%d", &n);

  printf("Input %d number of element in array\n", n);
  for (i = 0; i < n; i++) {
    printf("Element -%d:", i);
    scanf("%d", &a[i]);
  }
  printf("elements are :");
  for (i = 0; i < n; i++) {
    printf("% 5d", a[i]);
  }
  printf("\nelements in reverse\n");
  for (i = n - 1; i >= 0; i--) {
    printf("% 5d", a[i]);
  }
  printf("\n\n");
}