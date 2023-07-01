#include <stdio.h>

int main()
{
    int n;
    int lc=0,uc=0,d=0,more=0,sc=0;
    
    printf("Enter");
    scanf("%d",&n);
    char s[n];
    scanf("%s",s);
    for(int i=0;i<n;i++)
    {
        
        if(s[i]>='A'&& s[i]<='Z')
        uc=1;
        else if(s[i]>='a'&& s[i]<='z')
        lc=1;
        else if(s[i]>='0'&& s[i]<='9')
        d=1;
        else 
        {
            sc=1;
        }
        
    }
    if(sc==0)
    more++;
    if(lc==0)
    more++;
    if(uc==0)
    more++;
    if(d==0)
    more++;
    if(n<6)
    {
        if(6-n>more)
        printf("%d",6-n);
        else printf("%d",more);
    }
    else printf("%d",more);
    
    

    return 0;
}
