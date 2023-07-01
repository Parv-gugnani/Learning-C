#include "stdio.h"

int main(){
    
    int n,i;
    long int sum;
    
    scanf("%d", &n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d", &arr[i]);
        
    }
    for(i=0;i<n;i++)
    {
        sum += arr[i];
    }
    printf("%ld", sum);
    return 0;
}
