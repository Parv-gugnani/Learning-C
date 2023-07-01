// 1                                                                                                             
// 22                                                                                                            
// 333                                                                                                           
// 4444                                                                                                          
// 55555                                                                                                         
// 666666                                                                                                        
// 7777777                                                                                                       
// 88888888                                                                                                      
// 999999999                                                                                                     
// 10101010101010101010

// #include <stdio.h>

// void main()
// {
//     int i,j,rows;
//     printf("Enter the number of rows: ");
//     scanf("%d", &rows);
//     for(i=1;i<=rows;i++)
//     {
//         for(j=1;j<=1;j++)
//         printf("%d", i);
//         printf("\n");
//     }
// }

#include <stdio.h>

void main()
{
    int i,j,rows;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    for(i=1;i<=rows;i++)
    {
        for(j=1;j<=i;j++)
        printf("%d", i);
        printf("\n");
    }
}