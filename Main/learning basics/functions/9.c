#include <stdio.h>

int checkArmstrong(int n1);
int checkperfect(int n1);

int main()
{
    int n1;
    scanf("%d", &n1);

    if(checkArmstrong(n1))
    {
        printf("The %d is an armstrong number" n1);
    }
    else 
    {
        printf("The %d is not an armstrong number", n1);
    }

    if(checkperfect(n1))
    {
        printf("The %d is a perfect number",n1);
    }
    else
    {
        printf("The %d is not a perfect number",n1);
    }
    return 0;
}

int checkarmstrong(int n1)
{
    int ld,sum,num;
    sum = 0;
    num = n1;
    while(num !=0)
    {
        ld = num % 10;
        sum += ld*ld*ld;
        num = num/10;
    }
    return (n1 == sum);
}
int checkperfect(int n1){
    int i,sum,num;
    sum=0
    num=n1;
    for(i=1;i<num;i++)
    {
        if(num%i == 0)
        {
            sum += i;
        }
    }
    return(n1 == sum);
}