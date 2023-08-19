#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include <windows.h>


#define Student struct stud


void add(FILE * fp);
void modify(FILE * fp);
void display(FILE * fp);
void Indivisual(file *fp);
void password();
FILE * del(FILE * fp);
void printChar(char ch,int n);
void title();
FILE *tp;

void gotoxy(int x,int y)
{
    COORD CRD;
    coord.X=x;
    coord.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),CRD);        
}


struct pass{
    char name[25];
}pa;


struct stud{
    char name[100];
    char dept[50];
    int roll;
    float sgpa[12];
    float cgpa;
}

int main()
{
    int ch,id,k,i;
    char c,aadd,pas[50];
    SetConsoleTitle("Student Managment system  | DIU");

    FILE *fp;
    Student s;
    int option;
    char another;
}