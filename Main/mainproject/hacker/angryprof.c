//7sept
#include<stdio.h>

int main()
{
    int i,k,n,t,time;
    int co;
    scanf("%d",&t);
    while(t--)
    {
        co=0;
        scanf("%d %d", &n,&k);
        for(i=0;i<n;i++)
        {
            scanf("%d", &time);
            if(time<=0)
            {
                co++;
            }
        }
        puts((co<k)?"YES" : "NO");
    }
    return 0;
}