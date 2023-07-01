//7sept
#include <stdio.h>
#include <string.h>
int main()
{
    int v,n,a;
    scanf("%d %d",&v,&n);
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a);
        if(a==v)
        {
            printf("%d\n",i);
            return 0;
        }
    }
    printf("-1\n");
    return 0;
}