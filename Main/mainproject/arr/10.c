// C Exercises: Sort elements of an array in descending order


#include <stdio.h>

void main()
{
    int arr[100];
    int i,j,n,tmp;
    
    printf("Input the size of array");
    scanf("%d", &n);
    printf("Input %d elements in the array: \n", n);
    for(i=0;i<n;i++)
    {
        printf("elements - %d: ", i);
        scanf("%d", &arr[i]);
    }
    
    for(i=0;i<n;i++)
    {
        for(j=i+1;i<n;j++)
        {
            if(arr[i] < arr[j])
            {
                tmp =arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
            }
        }
    }
    
    printf("\nelements in descending order are:\n");
    for(i=0;i<n;i++)
    {
        printf("%d  ", arr[i]);
        
    }
    printf("\n\n");
}