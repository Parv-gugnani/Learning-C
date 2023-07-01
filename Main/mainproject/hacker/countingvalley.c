//5sept
#include <stdio.h>
#include <string.h>

int main()
{
    int n,i;
    int x=0;
    scanf("%d",&n);
    int a[n];//
    char s[n];//
    scanf("%s",s);
    for(i=0;i<n;i++)
    {
        if(s[i]=='U')
        {
           x++;
           a[i]=x; 
        }
        else {
            x=x-1;
            a[i]=x;
        }
    }
    x=0;
    for(i=0;i<n;i++)
    {
        if(a[i]<0&&a[i+1] == 0)
        x++;
    }
    printf("%d", x);
    return 0;
}