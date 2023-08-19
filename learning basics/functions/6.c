//5 sept
#include <stdio.h>

long toBin(int);

int main()
{
    long bno;
    int dno;
    scanf("%d", &dno);
    bno = toBin(dno);
    printf("The binary value is: %ld\n", bno);

    return 0;
}
long toBin(int dno)
{
    long bno=0,remainder,f=1;
    while(dno != 0)
    {
        remainder = dno % 2;
        bno = bno+remainder * f;
        f = f*10;
        dno = dno/2;
    }
    return 0;
}