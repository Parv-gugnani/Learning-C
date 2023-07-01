// #include <stdio.h>
// void main()
// {
//    int i,j;
//    printf("Input the number(Table to be calculated) : ");
//    scanf("%d",&i);
//    printf("\n");
//     for(i=1;i<=10;i++)
//     {
//         printf("%d x %d = %d \n", i,j,i*j);
//     }
// } 


#include <stdio.h>
void main()
{
   int j,n;
   printf("Input the number (Table to be calculated) : ");
   scanf("%d",&n);
   printf("\n");
   for(j=1;j<=10;j++)
   {
     printf("%d X %d = %d \n",n,j,n*j);
   }
} 