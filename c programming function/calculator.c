#include <stdio.h>

int main() {
    float result, num1, num2;
    char op;
    
    printf("Enter the first number: ");
    scanf("%f", &num1);
    
    printf("Enter the operation (+, -, *, /): ");
    scanf(" %c", &op);
    
    printf("Enter the second number: ");
    scanf("%f", &num2);
    
    switch (op) {
        case '-':
            result = num1 - num2;
            printf("%f\n", result);
            break;
        case '+':
            result = num1 + num2;
            printf("%f\n", result);
            break;
        case '*':
            result = num1 * num2;
            printf("%f\n", result);
            break;
        case '/':
            if (num2 == 0) {
                printf("Error! Division by zero.\n");
            } else {
                result = num1 / num2;
                printf("%f\n", result);
            }
            break;
        default:
            printf("Invalid operator.\n");
            break;
    }
    
    return 0;
}
