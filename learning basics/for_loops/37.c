#include "stdio.h"

int main()
{
  int base,ex;
  long long p=1;
  int i;
  scanf("%d",&base);
  scanf("%d",&ex);
  for(i=1;i<ex;i++)
  {
    p=p*base;
  }   
  printf("%d ^ %d = %lld",base,ex,p);
  
  return 0;
}