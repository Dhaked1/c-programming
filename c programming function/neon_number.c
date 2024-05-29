//eg 9, 9*9=81,,,, 8+1=9
#include<stdio.h>
int main()
{
int m,n,r,sum =0;
printf("enter a number");
scanf("%d",&n);
m =n;
n = n*n;
while (n!=0)
{
    r = n%10;
    sum = sum+r;
    n = n/10;
}
if(sum == m)
printf("entered number is a neon number");
else
printf("entered number is not a neon number");
    return 0;
}

