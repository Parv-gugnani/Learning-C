// C Exercises: Calculate profit and loss

#include <stdio.h>
int main() {
  int cp, sp, lp;

  printf("Enter the cost price: ");
  scanf("%d", &cp);

  printf("Enter the selling price: ");
  scanf("%d", &sp);

  if (sp > cp) {
    lp = sp - cp;
    printf("The amount profit from your product: %d\n", lp);

  } else if (cp > sp) {
    lp = cp - sp;
    printf("The amount of loss from your product: %d\n", lp);
  }

  else {
    printf("You are under no profit no loss");
  }
}