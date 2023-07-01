#include <stdio.h>
int main()
{
    int j;
    int sum =0;

    printf("The first 10 natural number is :\n");

    for(j=1;j<=10;j++)
    {
        sum = sum+j;
        printf("%d ", j);
    }
    printf("\nThe sum is : %d\n", sum);
}