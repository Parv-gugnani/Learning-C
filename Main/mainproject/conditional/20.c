// C Exercises: A menu-driven program to compute the area of the various
// geometrical shape

// case
// 1 - area=l*w; /rectangle
// 2 - area=.5*b*h; // traingle
// 3 - area=3.14*r*r; //area of circle

#include <stdio.h>
void main() {
  int l, w, b, h, r;
  int choice;
  float area;
  printf("Enter 1 for the area of rectangle\n");

  printf("Enter 2 for the area of traingle\n");

  printf("Enter 3 for the area of circle\n");

  scanf("%d", &choice);

  switch (choice) {
    //
  case 1:
    printf("Enter the length and width of your rectangle:");
    scanf("%d %d", &l, &w);
    area = l * w;
    break;

  case 2:
    printf("Enter the breadth and hieght of your traingle:");
    scanf("%d %d", &b, &h);
    area = .5 * b * h;
    break;
  case 3:
    printf("Enter the radius of your circle:");
    scanf("%d %d", &r);
    area = 3.14 * r * r;
    break;
  }

  printf("The area is:%f", area);
}