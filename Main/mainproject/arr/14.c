#include <stdio.h>
#include <stdlib.h>


int main(){
    int arr[100];
    int n;
    int i;
    float plus =0;
    float minus =0;
    float zeros = 0;
    
    printf("Enter the number of elements:");
    scanf("%d", &n);
    for(i =0 ; i<n;i++)
    {
        scanf("%d", &arr[i]);
        
        //if
        if(arr[i]>0)
        {
            plus++;
        }
        else if(arr[i]==0)
        {
            zeros++;
        }
        else 
        {
            minus++;
        }
    }
    printf("%.3f %.3f %.3f", plus,minus,zeros);
}