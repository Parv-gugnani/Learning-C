// admission
#include <stdio.h>

void main() {
  int p, c, m;
  int total, pm;

  printf("Input the marks of Physics: ");
  scanf("%d", &p);

  printf("Input the marks of Chemistry: ");
  scanf("%d", &c);

  printf("Input the marks of Maths: ");
  scanf("%d", &m);

  if (m > 65)
    if (c > 50)
      if (p > 55)
        if (p + c + m >= 190 || p + m >= 140)
          printf("The student is eligible for admission\n");

        else
          printf("Student is not eligible for admission");
      else
        printf("Student is not eligible for admission");
    else
      printf("Student is not eligible for admission");
  else
    printf("Student is not eligible for admission");
}