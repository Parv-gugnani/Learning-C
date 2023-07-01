//5sept
#include <stdio.h>
#define MAX 100

int findMaxElem(int []);
int n;

int main()
{
    int arr1[MAX], mxelem,i;

    printf("Input the number of elements to be stored in array");
    scanf("%d", &n);

    printf("Input %d elements in array:");
    for(i=0;i<n;i++)
    {
        printf("Elements - %d: ", i);
        scanf("%d", &arr1[i]);
    }
    mxelem = findMaxElem(arr1);
    printf("The largest element: %d", mxelem);
    return 0;
}
int findMaxElem(int arr1[])
{
    int i=1,mxelem;
    mxelem = arr1[0];
    while(i<n)
    {
        if(mxelem<arr1[i])
        {
            mxelem = arr1[i];
            i++;
        }
    }
    return 0;
}