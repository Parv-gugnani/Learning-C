#include <stdio.h>

int main()
{
    long long n;
    int c=0;
    scanf("%d",&n);
    do{
        c++;
        n /=10;
    }
    while(n!=0)
    printf("%d",c);

    return 0;
}