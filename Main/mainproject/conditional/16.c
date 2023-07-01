// C Exercises: Check whether an alphabet is a vowel or consonant
//  character aeiou//AEIOU
#include <stdio.h>

int main() {
  char sign;

  printf("Input any character:");
  scanf("%c", &sign);

  if (sign == 'a' || sign == 'e' || sign == 'i' || sign == 'o' || sign == 'u' ||
      sign == 'A' || sign == 'E' || sign == 'I' || sign == 'O' || sign == 'U')
    printf("this is vowel");

  else if ((sign >= 'a' && sign <= 'z') || (sign >= 'A' && sign <= 'Z'))
    printf("This is an alphabet");

  else
    printf("this is not an alphabet");
}