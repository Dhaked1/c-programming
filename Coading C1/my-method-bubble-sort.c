#include <stdio.h>

void swap(int* x, int* y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

void bubblesort(int arr[], int length) {
    for (int i = 0; i < length - 1; i++) {
    for (int j =0;j<length-1-i;j++){
        if (arr[j] > arr[j + 1]) {
            swap(&arr[j], &arr[j + 1]);
        }
    }
}
}
void printarray(int arr[], int length) {
    for (int i = 0; i < length; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int a[10] = {1, 2, 3, 4, 9, 7, 59, 5, 18, 90};
    int n = 10;
    bubblesort(a, 10);
    printf("Sorted array:\n");
    printarray(a, 10);
    return 0;
}