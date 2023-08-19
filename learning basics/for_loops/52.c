#include "stdio.h"
int main()
{
    int i,n,even,odd;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    even =0;
    odd=0;
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            even++;
        }
        else{
            odd++
        }
    }
    printf("even=%d &&  odd =%d",even,odd);

    return 0;
}
