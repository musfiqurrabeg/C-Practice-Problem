#include <stdio.h>

int main() {
    int n;

    printf("Enter N : ");
    scanf("%d", &n);

    int A[n], B[n];

    // Input the array A
    printf("Enter %d integers for Array A: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }

    printf("\n");

    // A to B in reverse order
    for (int i = 0; i < n; i++) {
        B[i] = A[n - 1 - i];
    }

    // Display Array A & B
    printf("Array A: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", A[i]);
    }
    printf("\n\n");

    printf("Array B: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", B[i]);
    }
    printf("\n");

    return 0;
}
