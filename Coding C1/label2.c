#include<stdio.h>

int main()
{
label:
    printf("we are inside label");
    goto end;
    printf("Hello world!\n");
    goto label ;
end:
    printf("we are at end");
    return 0;
}