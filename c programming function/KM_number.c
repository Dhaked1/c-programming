
#include <stdio.h>

int main() {
    int n, m, r, sum = 0, fact;
    
    printf("Enter a number: ");
    scanf("%d", &n);
    
    m = n;
    
    while (n != 0) {
        r = n % 10;
        fact = 1;
        
        for (int i = 1; i <= r; i++) {
            fact *= i;
        }
        
        sum += fact;
        n /= 10;
    }
    
    if (sum == m)
        printf("The number is a KM number\n");
    else
        printf("Not a KM number\n");

    return 0;
}

