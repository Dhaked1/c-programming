#include<stdio.h>
#include<math.h>

int main()
{

   double a,b,c,A,B,C;
   double pi=acos(-1); // For value of pi we use acos(-1).
   scanf("%lf%lf%lf",&a,&b,&c);


    A=((b*b+c*c)-(a*a))/(2*b*c);
    A=acos(A)*(180/pi);
    B=((c*c + a*a) -( b*b))/(2*c*a);
    B=acos(B)*(180/pi);
    C=180-(A+B);
    printf("A=%lf \nB=%lf \nC=%lf\n",A,B,C);

    return 0;
}