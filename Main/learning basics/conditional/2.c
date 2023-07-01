//odd or even
#include <stdio.h>
void main()
{
    int i,r;

    printf("Input an integer:");
    scanf("%d", &i);
    r = i % 2;
    
    if(r == 0)
       printf("%d is an even number\n", &i);

       else
          printf("%d is an odd number\n", &i); 
}