//8sept
#include <stdio.h>

int main() {
    int p,a,b,s;
    scanf("%d", &p);
    while (p--) 
    {
       scanf("%d%d%d", &a, &b, &s);
       printf("%d\n", (b+s-2)%a+1);
    }   
    return 0;
}