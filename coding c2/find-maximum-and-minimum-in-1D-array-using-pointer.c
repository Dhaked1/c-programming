#include<stdio.h>

int main()
{   int a[5],max,min,*p,i,n;
    p=a;
    printf("enter the size of array:");
    scanf("%d",&n);
    printf("enter the number:");
    for (i=0; i<n; i++)
    {   scanf("%d",(p+i));
    }
    max=*p;
    min=*p;
    for (i=0; i<n; i++)
    {   if (*(p+i)>max)
        {
            max =*(p+i);
        }
        if (*(p+i)<min)
        {
            min=*(p+i);
        }

    }
    printf("maximum is %d and minimum is %d", max,min);
    return 0;
}