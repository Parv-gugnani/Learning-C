//1 sept
//strcpy() is a standard library function in C/C++ and is used to copy one string to another.
#include <stdio.h>
#include <ctype.h> 
#include <string.h>

int main()
{
    char notes[15];
    char grade;
    
    scanf("%c", &grade);
    switch(grade)
    {
        case 'E':
        strcpy(notes,"Excellent");
        break;
        
        case 'V':
        strcpy(notes,"Very Good");
        break;
        
        case 'G':
        strcpy(notes,"Good");
        break;
        
        case 'A':
        strcpy(notes,"Average");
        break;
        
        case 'F':
        strcpy(notes,"Fail");
        break;
        
        default:
        printf("Invalid grade not found.");
        break;
    }
    printf("You have chosen : %s", notes);
    
}