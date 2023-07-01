#include "stdio.h"

int main()
{
    int i, j, end, isPrime;
    scanf("%d", &end);

    printf("All prime numbers between 1 to %d are:\n", end);
    for(i=2; i<=end; i++)
    {
        isPrime = 1; 
        for(j=2; j<=i/2; j++)
        {
            if(i%j==0)
            {
                isPrime = 0;
                break;
            }
        }
        if(isPrime==1)
        {
            sum +=i;
        }
        printf("%d",sum);
    }
    return 0;
}