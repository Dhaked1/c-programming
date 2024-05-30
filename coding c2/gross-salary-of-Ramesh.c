/* calculation of Ramesh gross salary*/
#include<stdio.h>

int main()
{
float bp,da,hra,grpay;
    printf("\n Enter Basic salary of Ramesh:");
scanf("%f", &bp);
da= 0.4*bp;
hra = 0.2*bp;
grpay = bp+da+hra;
printf("Basic salary of Ramesh = %f\n", bp);
printf("Dearness Allowance = %f\n", da);
printf("House Rent Allowance = %f\n",hra);
printf("Gross pay of Ramesh is = %f\n", grpay);


    return 0;
}