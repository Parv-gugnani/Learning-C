//10sept
#include <stdio.h>

int main() {
    int d1, m1, y1, d2, m2, y2;
    scanf("%d %d %d %d %d %d", &d1, &m1, &y1, &d2, &m2, &y2);
    if (y1 > y2) 
        printf("10000");
    else if (y1 < y2)
    {
        printf("0");
    }
      else if (m1 > m2)
      {
          printf("%d", (m1-m2)*500);       
      }
        else if (m1 < m2)
        {
          printf("0");
        }
          else if (d1 > d2)
           {
             printf("%d", (d1-d2)*15);
           }
             else
             {
                printf("0");
             }
    return 0;
}