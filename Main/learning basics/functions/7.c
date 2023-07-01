//5sept
#include<stdio.h>

int primeornot(int);
int main()
{
    int n1,prime;
    printf("Enter a postiver number:");
    scanf("%d", &n1);
    
    prime = primeornot(n1);
    if(prime == 1)
    {
        printf("The Number %d is a prime number.", n1);
    }
    else 
    {
        printf("The numnber %d is not a prime number", n1);
        return 0;
    }
}
int primeornot(int n1)
{
    int i=2;
    while(i<=n1/2)
    {
        if(n1%i==0)
        return 0;
        else 
        i++;
    }
    return 1;
}