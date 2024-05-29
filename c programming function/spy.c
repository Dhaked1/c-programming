//123-->1+2+3=1*2*3
#include<stdio.h>
int main(){
int m,n,sum = 0,r,prod = 1;
printf("enter the number :");
scanf("%d",&n);
m=n;
while (n!=0)
{
    r = n%10;
    sum+=r;
    prod*=r;
    n/=10;
}
if(sum == prod)
{
    printf("enterd number is spy");
}
else
{
    printf("not a spy number");

}

return 0;
}



