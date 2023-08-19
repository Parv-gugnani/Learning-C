// day acc to number

// C Exercises: Accept day number and display its equivalent day name in the
// word

#include <stdio.h>
void main() {
  int dayno;
  printf("Input day no: ");
  scanf("%d", &dayno);
  switch (dayno) {
  case 1:
    printf("Monday \n");
    break;
  case 2:
    printf("Tuesday \n");
    break;
  case 3:
    printf("Wednesday \n");
    break;
  case 4:
    printf("Thursday \n");
    break;
  case 5:
    printf("Friday \n");
    break;
  case 6:
    printf("Saturday \n");
    break;
  case 7:
    printf("Sunday \n");
    break;

  default:
    printf("Invalid day number please try again");
    break;
  }
}