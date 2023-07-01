#include <stdio.h>

int main()
{
    int i,orgnum,num,l,sum;
    long fact;
    scanf("%d",&num);
    orgnum = num;
    sum =0;
    
    while(num>0)
    {
        l=num%10;
        fact = 1;
        for(i=1;i<l;i++)
        {
            fact = fact*i;
        }
        sum = sum +fact;
        num = num/10;

    }
    if(sum==orgnum)
    {
        printf("orignal")
    }
}