#include "stdio.h"

int main()
{
   long long num,n;
   int i,l;
   int freq[base];
   scanf("%lld",&num);
   for(i=1;i<base;i++)
   {
    freq[i]=0
   }
   n=num;
   while(n!=0)
   {
    l=n%10;
    n/=10;
    freq[l]++;
   }
   for(i=0;i<base;i++)
   {
    printf("freq of %d = %d\n",i,freq[i]);

   }
   return 0;
}