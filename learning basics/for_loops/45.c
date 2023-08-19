#include "stdio.h"

int main()
{
    int orignal,num,l,digit,sum;
    scanf("%d", &num);
    sum=0;
    orignal=num;
    digit = (int)log10(num)+1;
    while(num>0)
    {
        l=num%10;
        sum = sum+(pow(l,digit));
        num = num/10;
    }
    if(orignal == sum)
    {
        printf("%d is armstrong no",num);
    }
    else {
     printf("%d is not an armstrong",num);
    }
}