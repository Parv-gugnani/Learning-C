#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include <windows.h>

#define Student struct Stud

void add(FILE * fp);
void modify(FILE * fp);
void display(FILE * fp);
void Indivisual(FILE *fp);
void password();
FILE * del(FILE * fp);
void printChar(char ch,int n);
void title();
FILE *tp;


void gotoxy(int x, int i){
    COORD CRD;
    CRD.X = X;
    CRD.Y = ;
    SetConsolePosition(GetStdHandle(STD_OUTPUT_HANDLE),CRD);
}

struct pass
{
    char pass[25]
}