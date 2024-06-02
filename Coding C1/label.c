#include<stdio.h>

int main()
{
label:
    printf("we are inside label");
    printf("Hello world!\n");
    goto label ;
    return 0;
}