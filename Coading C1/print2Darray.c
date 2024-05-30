#include<stdio.h>

int main()
{int arr[3][4];
int i,j,k;
    printf("Enter array element");
    for (i=0;i<3;i++)
    {
    for (j=0;j<4;j++)
    {
    scanf("%d",&arr[i][j]);
    
    }
    }
    printf("Accessing individual elements 2D array:\n");
    for (i=0;i<3;i++)
    {
    for (j=0;j<4;j++)
    {
    printf("%d",arr[i][j]);
    
    
    }printf("\n");
    
    }
    
    return 0;
}