//printf all odd no from 1 to n
#include "stdio.h"
int main()
{
    int i,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        if(i%2!=0)
        {
            printf("%d",i);
        }
    }
    return 0;
}