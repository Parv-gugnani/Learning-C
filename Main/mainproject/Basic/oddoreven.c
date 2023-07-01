#include "stdio.h"

int main(){
    int i; 

    printf("Enter the value of i:");
    scanf("%d", &i);

    if (i%2 ==0) {
    printf("%d is even number");
    }
    else
    printf("%d is a odd number");   

    return 0;
}