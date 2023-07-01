#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, sum0 = 0, sum1 = 0,n;

    

    scanf("%d", &n);

    int num[n][n];
    for(i=0; i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            
            scanf("%d", &num[i][j]);
        }
    }

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
           
        }
 
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j)
            {
                sum0 = sum0+num[i][j];
            }
            if(i+j==n-1)
            {
                sum1=sum1+num[i][j];
            }
        }
    }
 
    if(sum1>sum0)
    {
       printf("%d", sum1-sum0);
    } 
     if(sum0 > sum1)
    {
       printf("%d", sum0-sum1);
    }
    if ( sum0 == sum1){
        printf("%d", 0);
    }  
   
}

