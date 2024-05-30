
/*find the area of a triangle, given its sides*/

#include<stdio.h>
#include<math.h>            /*for squirt*/

int main()
{
float a,b,c,sp,area;
    printf("\n Enter sides of a triangle:");
    scanf("%f %f %f",&a,&b,&c);
    sp=(a+b+c)/2;
    area = sqrt(sp*(sp-a)*(sp-b)*(sp-c));
    printf("Area of triangle=%f\n", area);
    return 0;
}