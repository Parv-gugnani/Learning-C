//calculate the nth term
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n;
  
    scanf("%d", &n);
    
    int a[n];
    
    for(int i = 0;i<=2;i++){
        scanf("%d",&a[i]);
    }
    
    int answer = a[n-1];
    if(n > 3){
        for(int i = 3;i<n;i++){
        a[i] = a[i-1]+a[i-2]+a[i-3];
        if(i == n-1){
            answer = a[i];
        }
    }

    }
    
    printf("%d",answer);
}
