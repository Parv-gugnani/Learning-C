//5sept
#include <stdio.h>
int main()
{
    int n,k;
    scanf("%d %d", &n,&k);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
    }
    
    int s=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if((a[i]+a[j])%k == 0)
            {
                s++;
            }
            
        }
    }
    printf("%d", s);
}