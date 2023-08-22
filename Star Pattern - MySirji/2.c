#include<stdio.h>

 int main(){
/* Objective
          *
         **
        ***
       **** 
      *****
*/

/* 
 //Basic Skelton
 for(int j=0; j<5; j++) {
 for(i=0; i<5; i++){
   if(j<=i) // step 2 is this
   printf("*");
      else
        printf(" ");
   }
    printf("\n");
 }
*/
/*
 for(int i=0; i<=5; i++) {
 for(int j=1; j<5; j++){
   if(j<=6-i) // step 2 is this
   printf("*");
      else
        printf(" ");
   }
    printf("\n");
 }
 */

/*
output (lol):

****
****
****
***
**
*

*/
//main
 for(int i=1; i<=5; i++) {
 for(int j=1; j<=5; j++){
   if(j>=6-i) // step 2 is this
   printf("*");
      else
        printf(" ");
   }
    printf("\n");
 }


 }