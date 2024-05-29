#include<stdio.h>
struct pair
{
    int min;
    int max;
};
struct pair getMinMax(int arr[],int n)
{
    struct pair minmax;
    int i;
    if(n==1){
        minmax.max = arr[0];
        minmax.min = arr[1];
    }
    else
    {
        minmax.max = arr[1];
        minmax.min = arr[0];
    }
    for(i = 2;i<n;i++){
        if(arr[i]>minmax.max)
        minmax.min = arr[i];
        else if(arr[i]< minmax.min)
        minmax.min = arr[i];
    }
    return minmax;
};
int main(){
int arr[] = {1000,1,75,352,400};
int arr_size = 5;
struct pair minmax = getMinMax(arr,arr_size);
printf("\nmaximun element is %d",minmax.max);
printf("minimum element is %d",minmax.min);
getchar();
return 0;
}



