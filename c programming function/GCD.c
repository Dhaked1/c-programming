#include<stdio.h>
int main()
{
int m,n,i,gcd;
printf("enter two numbers");
scanf("%d %d",&n,&m);
for(i =1;i<=m&&i<=n;i++)
{
if(m%i ==0 && n%i ==0)
gcd = i;
}
printf("\n GCD of numbers is = %d",gcd);

    return 0;
}

