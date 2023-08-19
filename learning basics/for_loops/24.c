//sum of even number from 1 to n

#include "stdio.h"
int main()
{
    int i,n;
    int sum=0;
    scanf("%d",&n);
    for(i=2;i<n;i+=2)
    {
        sum += i;
    }
    printf("%d",sum);
    return 0;
}