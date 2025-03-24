#include <stdio.h>

int main() {
    int m, n;

    printf("Enter the number of rows and columns (m,n): ");
    scanf("%d %d", &m, &n);
    printf("\n");

    int A[m][n], B[m][n], C[m][n];
    printf("Enter the elements of matrix A:\n");

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &A[i][j]);
        }
    }
    printf("\n");

    printf("Enter the elements of matrix B:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &B[i][j]);
        }
    }
    printf("\n");

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }

    printf("Resulting matrix C (A + B):\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    return 0;
}
