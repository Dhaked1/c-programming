#include<stdio.h>

int main()
{int arr[9]={1,2,3,4,5,6,7,8,9};
int i;
//original order 
   for (i=0;i<9;i++)
    {
    printf("%d\t",arr[i]);
    }printf("\n");
    //Reverse order
    for (i=8;i>=0;i--)
    {
    printf("%d\t",arr[i]);
    
    }
    return 0;
}