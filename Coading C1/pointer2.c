#include<stdio.h>

int main()
{
    int i =3,*j,**k;
    j=&i;
    k=&j;
    printf("Address of i=%u\n",&i);

    printf("Address of i=%u\n",j);
    printf("Address of i=%u\n",*k);

    printf("Address of j=%u\n",&j);

    printf("Address of j=%u\n",k);

    printf("Address of k=%u\n",&k);

    printf("value of j=%u\n",j);

    printf("value of k=%u\n",k);
    printf("value of i=%u\n",i);

    printf("value of i=%d\n",*(&i));

    printf("value of i=%u\n",*j);

    printf("value of i=%u\n",**k);








    return 0;
}