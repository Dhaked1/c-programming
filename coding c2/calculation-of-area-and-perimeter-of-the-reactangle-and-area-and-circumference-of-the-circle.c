/* Calculation of area, perimeter of the rectangle and circumference of the circle*/

#include<stdio.h>

int main()
{
int Ar,Pr,Pc,l,b,r;
float pi;
    printf("\n Enter the length and breath of rectangle and radius of circle:");
    scanf("%d %d %d", &l,&b,&r);
    Ar = l*b;
    Pr = 2*l+2*b;
    Pc = 2*pi*r;
    pi = 3.14;
    printf("Area of rectangle = %d\n",Ar);
    printf("perimeter of rectangle = %d\n",Pr);
    printf("perimeter of circle = %d\n",Pc);
    
    return 0;
}