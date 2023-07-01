#include <stdio.h>

int main()
{
    int i,num,sum=0;
    scanf("%d",&num);
    for(i=1;i<=num/2;i++)
    {
        if(num%i==0)
        {
            sum+=i;
        }
    }
    if(sum == num && num > 0)
    {
        printf("%d is perfect",num);
    }
}