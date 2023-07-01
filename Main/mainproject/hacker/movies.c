//7sept

#include<stdio.h>
int main()
{
    
 int i=0,j=0,k=0,x=0;
 int r=0,s=0,c=0;//remainder//sum//counting
 
 scanf("%d %d %d",&i,&j,&k);
 for(i;i<=j;i++)
 {
  x=i;
  while(x!=0)
   {
   r=x%10;
   s=(s*10)+r;
   x=x/10;
   }
     if(abs(i-s)%k==0)
     c=c+1;
     s=0;
  }
  printf("%d",c);
  return 0;
}