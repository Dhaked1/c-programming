#include<stdio.h>
#include<stdlib.h>
int main()
{   int goals;
    printf("Enter the number ");
    scanf("%d",& goals);
    if(goals<=5)
        goto alka;
    else {
        printf("Jay shree ram\n");
        printf("Jay mahakal\n");
        exit (1);/*terminates program execution*/
    }
alka:
    printf("my name is Alka Dhaked");
    return 0;
}