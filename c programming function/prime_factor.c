#include <stdio.h>
void primefactor(int n)
{
    for (int i = 2; i <= n; i++)
    {
        while (n % i == 0)
        {
            printf("%d\n", i);
            n/=i;
        }
    }
}
int main()
{
    int n;
    printf("enter the number for prime factor");
    scanf("%d", &n);
    primefactor(n);
    return 0;
}
