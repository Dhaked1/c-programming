#include<stdio.h>

int main()
{int i,j;
for (i=1,j=2;j<=10 && i<=15;j++,i=i+2)
    printf("%d %d\n ",i,j);
    return 0;
}