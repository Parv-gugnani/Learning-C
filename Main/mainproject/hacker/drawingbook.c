#include <stdio.h>

int main()
{
    int n,p;
    int a,b;
    // int arr[10000000];
    scanf("%d", &n);
    scanf("%d", &p);
    a=p/2;
    b=(n-p)/2;
    if(a>b)
    {
        printf("%d", b);
    }
    else 
    printf("%d", a);
    return 0;
}

