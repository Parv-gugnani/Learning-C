#include <stdio.h>

int sum_of_four(int a, int b,int c,int d)
{
    int no=0;
    if(a>b && a>c && a>d)
    no =a;
    else if(b>a && b>c && b>d)
    no  = b;
    else if(c>a&&c>b&&c>d)
    no=c;
    else 
    no =d;
    
    return no;
}

int main(){
    int a,b,c,d;
    scanf("%d %d %d %d",&a, &b, &c, &d);
    int ans = sum_of_four(a,b,c,d);
    printf("%d", ans);
    
    return 0;       
}
