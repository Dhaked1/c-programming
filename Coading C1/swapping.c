#include<stdio.h>
void swapr(int *,int *);
int main()
{
    int a=10,b=20;
    swapr(&a,&b);

    printf("a=%d b=%d\n",a,b);
    return 0;
}
void swapr(int *x,int *y)
{

    int t;
    t=*x;
    *x=*y;
    *y=t;
}



