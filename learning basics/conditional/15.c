// C Exercises: Check whether a character is an alphabet, digit or special
// character

#include <stdio.h>

int main() {
  char sign;

  printf("Input the character :");
  scanf("%c", &sign);

  if ((sign >= 'a' && sign <= 'z') || (sign >= 'A' && sign <= 'Z')) 
  {
       printf("This is an alphabet.\n");
  } else if (sign >= '0' && sign <= '9') {
    printf("This is a digit");
  } else
    printf("this is a special character");
}