// C Exercises: Print all unique elements of an array

#include <stdio.h>

int main()
{
    int arr[100];
    int n,crt=0;
    int i,j,k;
    printf("Input the number of elements: ");
    scanf("%d", &n);
    
    printf("Input %d elements in the array: \n", n);
    for(i=0;i<n;i++)
    {
        printf("elements - %d: ", i);
        scanf("%d", &arr[i]);
    }
    printf("elements found in array are: ");
    for(i=0;i<n;i++)
    {
        crt=0;
        for(j=0,k=n;j<k+1;j++)
        {
            if(i!=j)
            {
                if(arr[i] == arr[j])
                {
                    crt ++;
                }
            }
        }
        if(crt==0)
        {
            printf("%d", arr[i]);
        }
    }
    printf("\n\n");
    
}