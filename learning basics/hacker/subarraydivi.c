//4sept
#include <stdio.h>

int main(){
    int n; 
    int d,m;
    scanf("%d",&n);
    int *sq = malloc(sizeof(int) * n);
    for(int ex = 0; ex < n; ex++)
    {
       scanf("%d",&sq[ex]);
    }
 
    scanf("%d %d",&d,&m);
    int count = 0;
    for (int i = 0; i < n; i++) 
    {
        
        
        int sum = 0;
        
        if (i + m <= n) 
        {
            for (int j = 0; j < m; j++) 
            {
                sum+=sq[i+j];
            }
            if (sum == d) 
            {
                count++;
            }
        }
    }
    printf("%d\n", count);
    return 0;
}