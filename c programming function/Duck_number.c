// which has atleast one zero = eg 402 , 280
#include<stdio.h>
int main(){
int m,n,r,count =0;
printf("enter a number");
scanf("%d",&n);
while (n !=0)
{
     r = n%10;
    if (r ==0)
    count++;
    n =n/10;
}
if (count >0)
printf("the entersd number is a duck number");
else
printf("entered number is not a duck number");
    return 0;
}



