// Check whether a triangle is Equilateral, Isosceles or Scalene

// Equilateral a=b=c
// Isosceles a = b && a = c && b = c
// else scalene

#include <stdio.h>
void main() {
  int a, b, c; // angles

  printf("Enter the angles of the traingle:");
  scanf("%d %d %d", &a, &b, &c);

  if (a == b && b == c) // a=b and b=c then a=c
  {
    printf("this is Equilateral traingle ");
  } else if (a == b || b == c || a == c)
    printf("This is Isosceles traingle ");

  else
    printf("this is Scalene traingle");
}