/* Conversion of distance*/
#include<stdio.h>

int main()
{
float km,m,cm,ft, inch;
printf("\n Enter the distance in kilometres:");
scanf("%f", &km);
m= km*1000;
cm = m*100;
inch = cm/2.54;
ft = inch/12;

    printf("Distance in metre s =%f\n",m);
    printf("Distance in centimetre = %f\n",cm);
    printf("Distance in feet = %f\n", inch);
    printf("Distance in inches = %f\n", inch);
    return 0;
}