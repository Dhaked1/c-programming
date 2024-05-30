#include<stdio.h>

int main()
{
int x=1;
switch(x)
{
x=x+1;//this statement is not executed 
printf("The extra statement");
case 1:printf("choice is 1");
break ;
case 2: printf("choice is 2");
break ;

default: printf("choice other than 1 and 2");
break ;
}

    printf("\nHello world!");
    return 0;
}