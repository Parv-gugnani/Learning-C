// C Exercises: A menu-driven program for a simple calculator

#include <stdio.h>

void main() {
  int opt;
  int a, b;
  // float answer;

  printf("Enter the value of a:\n");
  scanf("%d", &a);

  printf("Enter the value of b:\n");
  scanf("%d", &b);

  printf("Press 1 for the addison\n");
  printf("Press 2 for the subtraction\n");
  printf("Press 3 for the multiplication\n");
  printf("Press 4 for the divison\n");

  scanf("%d", &opt);

  switch (opt) {
  case 1:
    printf("the addison of %d and %d : %d", a, b, a + b);
    // scanf("%d %d", &a,&b);
    break;

  case 2:
    printf("Subision of %d and %d: %d", a, b, a - b);
    // scanf("%d %d", &a,&b,a-b);
    break;

  case 3:
    printf("multiplication of %d and %d: %d", a, b, a * b);
    // scanf("%d %d", &a,&b,a*b);
    break;

  case 4:
    printf("divison of %d and %d: %d", a, b, a / b);
    // scanf("%d %d", &a,&b,a/b);
    break;

  case 5:
    break;

  default:
    printf("Incorrect option");
  }
}