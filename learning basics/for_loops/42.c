#include "stdio.h"

int main()
{
   int i,num,isprime;
   isprime = 1;
   scanf("%d", &num);
   for(i=2;i<num/2;i++)
   {
    if(num%i==0){
        isprime =0;
        break;
    }
   }
   if(isprime==1&num>1)
   {
    printf("%d is prime",num);

   }
   else 
   printf("%dis not a prime no",num);

   return 0;
}