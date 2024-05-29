// harshad number or niven number 156-->1+5+6=12, 156%12 = 0 completly divisible
#include<stdio.h>
int main(){
int m,n,r,sum = 0,prod =1;
printf("enter the number ");
scanf("%d",&n);
m = n;
while (n !=0)
{
    r = n%10;
    sum+=r;
    n/=10;
}
if(m%sum == 0)
printf("the number is niven number");
else
printf("the number is not a niven number");
    return 0;
}


