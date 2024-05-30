#include <stdio.h>

int main()
{
    int arr[]={1,5,2,6,3,4,7};
    int size=7;
    
    for(int i=0;i<size-1;i++)
    {
        for(int j=0;j<size-1-i;j++)
        {
            if(arr[j+1]<arr[j])
            {
                int temp = arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    
    for(int k=0;k<size;k++)
    {
        printf("%d " ,arr[k]);
    }

    return 0;
}
