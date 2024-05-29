//last digit of it is a square of the given number eg in 625 ,25 is squaroot of 625
#include<stdio.h>
int main()
{
int n,m,r,flag = 0,r1,q;
printf("enter the number");
scanf("%d",&n);
m =n;
q = n*n;
while (n !=0)
{
    r = n%10;
    r1=q%10;
    if (r!=r1)
    {
        flag = 1;
    }
    n = n/10;
    q= q/10;
}
if(flag == 0)
printf("the number is automorphic");
else
printf("not a automorphic number ");


return 0;
}
