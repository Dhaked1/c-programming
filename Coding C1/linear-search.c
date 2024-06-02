#include<stdio.h>
int linear_search(int a[],int length,int target){
for(int i=0;i<length;i++)
{
if (a[i]==target){
return i;
}
}
return -1;

}
int main()
{
int a[]={1,2,3,4,5,6,7,8};
int length=sizeof(a)/sizeof(a[0]);
int target=7;
int x = linear_search(a, length, target);
if (x!=-1){
printf("element find at the position %d",x);
}else
{
printf("element not found");
}
    return 0;
}