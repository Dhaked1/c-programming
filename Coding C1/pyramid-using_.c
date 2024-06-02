#include <stdio.h>

int main() {
    int rows, i, j, space;

    printf("Enter the number of rows for the pyramid: ");
    scanf("%d", &rows);

    for (i = 1; i <= rows; ++i) {
        // Print spaces before the asterisks
        for (space = 1; space <= rows - i; ++space) {
            printf(" ");
        }

        // Print asterisks
        for (j = 1; j <= 2 * i - 1; ++j) {
            printf("*");
        }

        // Move to the next line
        printf("\n");
    }

    return 0;
}