#include <stdio.h>

void checkforsum(int arr[], int n, int s)
{
    for(int i = 0; i<n-1; i++)
    {
        for(int j=i+1; j<n; i++)
        {
        
          if(arr[i] + arr[j] == s)
          {
              printf("Pair of element can make the give sum by the value of index: %d and %d", i, j);
          }
        }  
    }
    printf("No pair-can make the given sum");
}


int main()
{
    int arr[] = {6,8,4,-5,7,9};
    int s = 15;
    printf("The given array: ");
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<n-1; i++)
    {
        printf("%d", arr[i]);
    }
    printf("/n The given: %d \n", s);
    printf("/n");
    checkforsum(arr,n,s);
    return 0;
}
