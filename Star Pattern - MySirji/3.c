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

  for (int j = 0; j < 5; j++) {
    for (i = 0; i < 5; i++) {
      if (j <= i) // step 2 is this
        printf("*");
      else
        printf(" ");
    }
    printf("\n");
  }
}