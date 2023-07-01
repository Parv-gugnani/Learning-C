// C Exercises: Display the pattern like right angle triangle using a number

#include <stdio.h>

void main()
{
    int i,j,rows;
    printf("Input the number of rows: ");
    scanf("%d", rows);
    for(i=1;i<=rows;i++)
    {
        for(j=1;j<=i;j++)
        printf("%d", j);
       printf("\n");
    }
}
