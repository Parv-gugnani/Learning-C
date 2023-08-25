/*
 *****
 ****
 ***
 **
 *
 */
#include "stdio.h"

int main() {
  int i;
  int j;

  for (i = 1; j <= 5; i++) {

    for (i = 1; j <= 5; j++) {
      if (j <= 6 - i)
        printf("*");
      else
        printf(" ");
    }
  }
}