#include<stdio.h>
int binary(int arr [],int key,int size){

int start = 0;
int end = size-1;
while (start<=end)
{
    int mid = (start+end)/2;
    if(mid == key)
    {
        return mid;
    }
    else if(mid<key)
    {
        start = mid+1;
    }
    else
    {
        end = mid-1;
    }

}
return -1;
}
int main()
{
int arr[] = {1,2,3,4,5,6,7,8,9};
int key = 7;
int size = 9;
int index = binary(arr,key,size);
if(index== -1)
{
    printf("element not found");
}
else{
printf("element was found at index = %d",index);
}
    return 0;
}