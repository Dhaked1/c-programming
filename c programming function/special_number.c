// special number 59 = 5+9+5*9
#include <stdio.h>
int main()
{
    int m, n, r, sum = 0, prod = 1;
    printf("enter a number");
    scanf("%d", &n);
    m = n;
    while (n != 0)
    {
        r = n % 10;
        sum = sum + r;
        prod = prod * r;
        n = n / 10;
    }
    if (m == sum + prod)
    {
        printf("enterd number is a special number");
    }
    else
    {
        printf("enterd number is not a special number");
    }

    return 0;
}
