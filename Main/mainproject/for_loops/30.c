//swap
#include <stdio.h>

int main()
{
    int n,f,l,digit,swaped;
    scanf("%d",&n);
    l=n%10;
    digit=(int)log10(n);
    f=(int)(n/pow(10,digit));

    swaped =l;
    swaped *= (int) pow (10,digit);   
    swaped -=l;
    swaped +=f;
    printf("%d",n);
    printf("%d",swaped);

    return 0;
}