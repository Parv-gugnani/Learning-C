//vote system
#include <stdio.h>

int main()
{
    int name, phone_number,  age;

    printf("Welcome to vote bank\n");
    printf("Let me know your details\n");
    // printf("What is your name:\n", name);
    // printf("What is your Phone number:\n", phone_number);
    printf("What is your age:");
    scanf("%d", &age);

    if(age > 18)
    printf("You are eligle to give vote");
    else
     printf("Sorry, you are not eligle to give vote");

}