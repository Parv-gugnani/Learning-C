#include <stdio.h>
int main() {
  int values[5];

  printf("Enter the 5 integer: ");

  for (int i = 0; i < 5; ++i) {
    scanf("%d", &values[i]);
  }
  printf("Displaying integers: ");

  for (int i = 0; i < 5; ++i) {
    printf("%d  ", values[i]);
  }
}