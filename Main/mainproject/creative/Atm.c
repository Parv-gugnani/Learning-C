#include <stdio.h>

int main()
{
    float x,y;
    char ch;
    printf("Enter intial amount");
    scanf("%f", &x);
    printf("Enter\n C for credit\nD for debit\nB for balance");
    scanf("%c", &ch);

    switch(ch)
    {
        case 'c':
        printf("Enter the credit amount \n");
        scanf("%f", &y);
        x=x+y;
        
        printf("New amount = %f", x);
        break;
        
        case 'd':
        printf("Enter debit amount\n");
        scanf("%f", &y);
        if(x>y){
          x=x-y;
          printf("New amount = %f", x);
        }
        else{
            printf("Insufficent amount in your account");
        }
        break;
        
        case 'b':
            printf("Amount in your account = %f", x);
            
            break;
            
            default:
            printf("Invalid option");
    }
    return 0;
}
