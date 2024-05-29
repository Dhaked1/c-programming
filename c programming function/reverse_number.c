#include<stdio.h>
int main(){
int n,r;
printf("enter a number to find reverse");
scanf("%d",&n);
while (n>0)
{
    r = n%10;
    printf("%d \b",r);
    n = n/10;
}
    return 0;
}