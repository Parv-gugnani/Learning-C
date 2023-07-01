#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int i;
    
    
    int number =0;
    
    scanf("%d", &n);
    int arr[n];
    int max = 0;
    for(i =0 ; i< n;i++)
    {
        scanf("%d", &arr[i]);
        if(max < arr[i])
        {
            max = arr[i];
        }
    }
    for (i= 0; i<n; i++) {
       if (arr[i] == max) {
         max = arr[i];
         number++;
       }
    }
    printf("%d", number);

       
}     
