#include <stdio.h>

int main() {
    int m, n;

    printf("Enter the dimensions of the matrix (m n): ");
    scanf("%d %d", &m, &n);

    int matrix[m][n];
    printf("Enter %d integers to form a %dx%d matrix: \n", m * n, m, n);
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("Traditional Matrix View:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    printf("Row-wise: ");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", matrix[i][j]);
        }
    }
    printf("\n");

    printf("Column-wise: ");
    for (int j = 0; j < n; j++) {
        for (int i = 0; i < m; i++) {
            printf("%d ", matrix[i][j]);
        }
    }
    printf("\n");

    return 0;
}
