#include <stdio.h>

void vol_of()
{
    int l;
    int b;
    int h;
    
    scanf("%d %d %d",&l,&b,&h);
    
    int vol = 0;
    vol = l*b*h;
    
    printf("%d", vol);
    
    
    
    }
int main()
{

    
    int n;
    scanf("%d", &n);
    for(int i=0;i<n;i++)
    {
        vol_of();
    }

    return 0;
}
