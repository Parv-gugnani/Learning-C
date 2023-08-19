//5sept
#include <stdio.h>

int checkPerfect(int n1);
void PerfectNumbers(int stLimit, int enLimit);

int main()
{
    int stLimit, enLimit;

    scanf("%d", &stLimit);
    printf(" Input highest search limit of  perfect numbers : ");
    scanf("%d", &enLimit);

    PerfectNumbers(stLimit, enLimit); 
    return 0;
}

int checkPerfect(int n1)
{
    int i, sum;
     
    sum = 0;
    for(i=1; i<n1; i++)
    {
        if(n1 % i == 0)
        {
            sum += i;
        }
    }
    if(sum == n1)
        return 1;
    else
        return 0;
}

void PerfectNumbers(int stLimit, int enLimit)
{
   
    while(stLimit <= enLimit)
    {
        if(checkPerfect(stLimit))
        {
            printf(" %d  ", stLimit);
        }
        stLimit++;
    }   
}