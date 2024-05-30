/*Calculation profit or loss*/
#include<stdio.h>

int main()
{
float cp,sp,p,l;

    printf("\nEnter cost price and selling price:");
    scanf("%f %f",&cp,&sp);
    p= sp-cp;
    l=cp-sp;
    if(p>0)
    printf("The seller made a profit of Rs.%f\n",p);
    if (l>0)
    printf("The seller incurred loss of Rs.%f\n",l);
    if (p==0)
    printf("There is no loss ,no profit\n");
    
    return 0;
}