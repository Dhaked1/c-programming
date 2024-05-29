#include<stdio.h>
int largest(int arr[],int len){
int i;
int max = arr[0];
for(i=0;i<len;i++){
if(arr[i]>arr[0])
max = arr[i];
}
return max;
}
int main(){
int arr[10] = {1,2,63,95};
int len = sizeof(arr)/sizeof(arr[0]);
int maximum = largest(arr,len);
printf("the largest number in given array is = %d",maximum);
    return 0;
}




