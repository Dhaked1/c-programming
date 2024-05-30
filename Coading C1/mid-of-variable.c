#include<stdio.h>

int main()
{
    int var,mid;
    printf("enter the value of variable");
    scanf("%d",&var);
    if (var%2==0)
    {
        mid = var/2;
        printf("mid=%d",mid);
    }

    else {
        mid=(var+1)/2;
        printf("mid=%d",mid);


    }

    return 0;
}