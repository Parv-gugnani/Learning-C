//4sept
#include <stdio.h>


int checkOddEven(int n1)
{   
    return (n1 & 1);
}

int main()
{
    int n1;    
    printf("Input any number : ");
    scanf("%d", &n1);

    if(checkOddEven(n1))
    {
        printf("The entered number is odd.\n\n");
    }
    else
    {
        printf("The entered number is even.\n\n");
    }
    return 0;
}