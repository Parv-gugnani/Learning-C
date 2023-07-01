#include "stdio.h"

int main()
{
   int i,num;
   scanf("%d",&num);
   printf("All factor of %d are:\n",num);
   for(i=0;i<num;i++)
   {
     if(num%i==0)
     {
        printf("%d",i)
     }
   }   
   return 0;
}