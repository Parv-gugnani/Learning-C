//1 sept
#include <stdio.h>

int main()
{
    char a;
    
    scanf("%c", &a);
    if((a>='a'&&a<='z') || (a>='A'&&a<='Z'))
    {
        printf("this is alphabet");
        
    }
    else if((a>='0'&&a<='9'))
    {
        printf("this is digit");
        
    }
    else 
    {
        printf("this is special character");
    }
    
    
}