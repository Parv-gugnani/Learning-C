#include <stdio.h>

int main()
{
   int n;
   scanf("%d",&n);
   int arr[n];
   for(int i=0;i<n;i++)
   {
       scanf("%d",&arr[i]);
   }
      int r=0,c=0;
   for(int i=0;i<n;i++)
   {
       c=0;
       for(int j=i;j<n;j++)
       {
           if(arr[i] == arr[j])
           c++;
       }
           if(c>r)
           r=c;
   }
           printf("%d",n-r);

    return 0;
}