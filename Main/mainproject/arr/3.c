// C Exercises: Display the pattern like right angle using an asterisk
#include <stdio.h>
void main() {
  int i, j, rows;
  printf("input the number of row:");
  scanf("%d", &rows);
  for (i = 1; i <= rows; i++) {
    for (j = 1; j <= i; j++)
      printf("*");

    printf("\n");
  }
}