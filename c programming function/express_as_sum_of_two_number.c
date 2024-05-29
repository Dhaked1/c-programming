#include <stdio.h>
int isPrime(int n)
{
    int i, isprime = 1;
    if (n == 0 || n == 1)
    {
        isprime = 0;
    }
    else
    {
        for (i = 2; i <= n / 2; i++)
        {
            if (n % i == 0)
            {
                isprime = 0;
                break;
            }
        }
    }
    return isprime;
}

int main()
{
    int n;
    printf("enter the number");
    scanf("%d", &n);
    for (int i = 2; i <= n / 2; i++)
    {
        if (isPrime(i) == 1)
        {
            if (isPrime(n - i) == 1)
            {
                printf("yes\n");
                return 0;
            }
        }
    }
    printf("no\n");
    return 0;
}
