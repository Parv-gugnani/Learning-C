//8sept
#include "stdio.h"

int main()
{
    int n,i;
    int a=0,b=0;
    int s=0,m=5;//m is peaple on social media
    
    scanf("%d", &n);
    for(i=0;i<n;i++)
    {
        a=m/2;
        m=a*3;
        s += a;
        
    }
    printf("%d",s);
    return 0;
}