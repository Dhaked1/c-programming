#include<stdio.h>
void minmax(int arr[],int len){
int min=arr[0];
int max = arr[0];
for(int i=0;i<len;i++){
if(arr[i]<arr[0])
min = arr[i];
else if(arr[i]>arr[0])
max = arr[i];
}
printf("min = %d and max = %d",min,max);
}
int main()
{
int arr[] = {1,2,5,6,7,6,4};
/*int arr[10]={1,2,5,6,7,6,4};*/
//int arr[7]={1,2,5,6,7,6,4}; otput is different in both the cases
int len = sizeof(arr)/sizeof(arr[0]);
minmax(arr,len);
    return 0;
}

