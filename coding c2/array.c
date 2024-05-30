#include<stdio.h>

int main()
{
int a[10],i,s=0;


    printf("Enter 10 numbes :\n");
    
   for (i=0;i<10;i++)
    {
    scanf("%d",&a[i]);
    s=s+a[i];
    
    
    }
    
    
    printf("\n number stored in array:\n");
    for (i=0;i<10;i++)
    printf("a[%d]=%d\n",i,a[i]);
    printf("\n sum of integer numbers: %d",s);
    
    return 0;
}