// C Exercises: Accept day number and display its equivalent day name in the
// word

#include <stdio.h>
void main() {
  int monno;
  char monnm[15];
  printf("Input month no: ");
  scanf("%d", &monno);
  switch (monno) {
  case 1:
  case 3:
  case 5:
  case 7:
  case 10:
  case 12:

    printf("this month have 31 days");
    break;

  case 2:
    printf("Feb have 28 days\n");
    printf("And feb have 29 days when it is leap year");
    break;

  case 4:
  case 6:
  case 9:
  case 11:
    printf("this month have 30 days");
    break;

  default:

    printf("This is invalid month, please enter valid month number!!!");
    break;
  }
}