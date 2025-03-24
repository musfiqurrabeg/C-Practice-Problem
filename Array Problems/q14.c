#include <stdio.h>

int main() {
    int n, m;

    printf("Enter the number of array A: ");
    scanf("%d", &n);

    int A[n];

    printf("Enter %d elements of array A: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }

    printf("Enter the number of array B: ");
    scanf("%d", &m);

    int B[m];

    printf("Enter %d elements of array B: ", m);
    for (int i = 0; i < m; i++) {
        scanf("%d", &B[i]);
    }

    // Swap elements between A and B
    if (n != m) {
        printf("Arrays A and B must have the same size to swap elements.");
        return 1;
    } else {
        for (int i = 0; i < n; i++) {
            int temp = A[i];
            A[i] = B[i];
            B[i] = temp;
        }

        printf("Array A after swapping: ");
        for (int i = 0; i < n; i++) {
            printf("%d ", A[i]);
        }

        printf("\n\nArray B after swapping: ");
        for (int i = 0; i < m; i++) {
            printf("%d ", B[i]);
        }
        printf("\n");
    }

    return 0;
}
