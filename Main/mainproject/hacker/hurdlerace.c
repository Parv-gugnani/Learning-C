//6sept
#include <stdio.h>

int main(){
    int n,k;
    
    int max=-1,ans=0;
    scanf("%d %d",&n,&k);
    int height[n];
    for(int i = 0; i < n; i++){
       scanf("%d",&height[i]);
        if(height[i]>max)
            max=height[i];
    }
    if(max>k)
        ans=max-k;
    printf("%d",ans);
    return 0;
}