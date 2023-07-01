//find the largest among 3


#include <stdio.h>
int main()
{
    int a,b,c;

    printf("enter the value of a , b and c: ");
    scanf("%d %d %d", &a,&b,&c);
    printf("1st number = %d,\t 2nd number = %d\t, 3rd number = %d\n", a,b,c);
    if(a>b)
    {
        if(a>c)
        printf("a is greatest number\n");

        else
         printf("c is greatest number\n");
    }
    else if(b>c)
    printf("B is greatest number");
    else 
    printf("c is greatest number");
}