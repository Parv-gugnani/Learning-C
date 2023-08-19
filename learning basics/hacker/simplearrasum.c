#include <stdio.h>


int main() {
  long int sum =0;
  int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0; i<n; i++)
        {
      scanf("%d",&arr[i]);
    }
    for(int i=0; i<n;i++)
        {
        sum += arr[i];
    }  
    printf("%ld",sum);
    return 0;
}