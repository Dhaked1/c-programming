#include<stdio.h>
#include<math.h>
#include<stdlib.h>
void findroots(int a,int b,int c){
if(a==0){
    printf("invalid");
return;
}
int d=b*b-4*a*c;
double sqrt_val = sqrt(abs(d));
if(d>0){
    printf("roots are real and different");
    printf("%f\n%f",(double)(-b+sqrt_val)/(2*a),(double)(-b-sqrt_val)/(2*a));
}

if(d == 0){
    printf("roots are real and same\n");
    printf("%f",-(double)b/(2*a));
}
else//d<0
{
printf("roots are imaginary\n");
printf("%f+i%f\n %f-i%f",-(double)b/(2*a),sqrt_val /(2*a),-(double)b/(2*a),sqrt_val/(2*a));
}
}
int main(){
int a,b,c;
printf("enter the value of a,b and c for quadretic equation ax^2+bx+c=0");
scanf("%d %d %d",&a,&b,&c);
findroots(a,b,c);
return 0;
}





