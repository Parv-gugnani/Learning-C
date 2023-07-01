//

#include <stdio.h>

void main()
{
    int arr[100];
    int i,mx,mn,n;
    
    printf("Input the number of element");
    scanf("%d", &n);
    
    printf("Input %d element in the array", i);
    for(i=0;i<n;i++)
    {
        printf("element - %d:", i);
        scanf("%d", arr[i]);
    }
    
    mx = arr[0];
    mn = arr[0];
    
    for(i=1;i<n;i++)
    {
        if(arr[i]>mx)
        {
            mx =arr[i];
        }
        if(arr[i]<mn)
        {
            mn = arr[i];
        }
    }
    printf("Max element in array: %d\n",mx);
    printf("Min element: %d\n", mn);
}