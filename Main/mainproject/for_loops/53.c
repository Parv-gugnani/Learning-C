#include "stdio.h"
int main()
{
    int i,n,num,pos;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&num);
    scanf("%d",&pos);

    if(pos>n+1 || pos <=0)
    {
        printf("1 to %d",size);
    }
    else{
        for (i=n;i>pos;i--)
        {
            arr[i]=arr[i-1];
        }
        arr[pos-1]=num;
        size;

        for(i=0;i<n;i++)
        {
            printf("%d",arr[i]);
        }
    }

    return 0;
    
}
