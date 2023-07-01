//7sept
#include <stdio.h>
int main()
{
    int i,n,t;
    scanf("%d", &t);
    while(t>0)
    {
        int h=1;
        scanf("%d", &n);
        for(i=1;i<=n;i++)
        {
            if(i%2==1)
            h=2*h;
            else
            h=h+1;
        }
        printf("%d\n",h);
        t=t-1;
    }
    return 0;
}