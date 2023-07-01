//6 sept
#include <stdio.h>

int main(){
    int b; 
    int n; 
    int m,i,j,k,l; 
    scanf("%d %d %d",&b,&n,&m);
    int *keyboards = malloc(sizeof(int) * n);
    for(int keyboards_i = 0; keyboards_i < n; keyboards_i++){
       scanf("%d",&keyboards[keyboards_i]);
    }
    int *pendrives = malloc(sizeof(int) * m);
    for(int pendrives_i = 0; pendrives_i < m; pendrives_i++){
       scanf("%d",&pendrives[pendrives_i]);
    }
    k=-1;
    for(i=0;i<n;i++)
        {
        if(keyboards[i]>=b)
            {
            continue;
        }
        for(j=0;j<m;j++)
            {
            if(keyboards[i]+pendrives[j]<=b&&keyboards[i]+pendrives[j]>k)
                {
                k=keyboards[i]+pendrives[j];
            }
        }
    }
    printf("%d",k);
    return 0;
}
