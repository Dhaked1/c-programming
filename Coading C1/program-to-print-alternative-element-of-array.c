#include <stdio.h>

int main() {
    int n;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Alternate elements of the array: ");
    for (int i = 0; i < n; i += 2) {
        printf("%d, ", arr[i]);
    }

    return 0;
}