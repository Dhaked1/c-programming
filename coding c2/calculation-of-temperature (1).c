/*c Calculation of temperature*/
#include<stdio.h>

int main()
{
float F,C,K;
printf("\n Enter the temperature of city in Fahrenheit:");
scanf("%f", &F);
F = 9/5*C+32;
K = C+273;

    printf("Temperature in centigrade =%f\n", C);
    printf("Temperature in Kelvin= %f\n", K);
    return 0;
}