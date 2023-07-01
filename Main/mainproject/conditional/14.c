// C Exercises: Check whether a triangle can be formed by given value

// a+b+c=180 then it can form
// else this traingle is not valid

#include <stdio.h>
int main() {
  int a, b, c, sum;

  printf("Enter the angles:");
  scanf("%d %d %d", &a, &b, &c);

  sum = a + b + c; //?

  if (sum == 180) {
    printf("This can form a traingle");

  } else
    printf("this is not valid");
}