#include "stdio.h"

int main(){
    int i;

    printf("enter a number : \n");
    scanf("%d", &i);

    if(i>0)
        printf("%d Number is postive\n", i);

    else if (i<0)
      printf("%d Number is negative", i);

    else
        printf("0 is neither negative nor postive");


   return 0;
}