#include <stdio.h>

int main() {
    int i, j, k;
    int A[3][3], B[3][3], C[3][3];

    // Input elements for matrix A
    printf("Enter the elements of matrix A (3x3):\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &A[i][j]);
        }
    }
    printf("\n");
    // Input elements for matrix B
    printf("Enter the elements of matrix B (3x3):\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &B[i][j]);
        }
    }
    printf("\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            C[i][j] = 0;
        }
    }
    printf("\n");
    // Matrix multiplication C = A * B
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            for (k = 0; k < 3; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    printf("\n");
    printf("Resulting matrix C (A * B):\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}
