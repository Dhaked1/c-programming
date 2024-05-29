#include<stdio.h>
unsigned int  fact(int n)
{
if(n==0){
return 1;
}
return n * fact(n-1);
}



int main()
{int n;
printf("enter a number to find the factorial of number\n");
scanf("%d",&n);
printf("factorial = %d",fact(n));

    return 0;
}



