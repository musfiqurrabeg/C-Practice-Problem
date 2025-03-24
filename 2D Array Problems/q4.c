#include <stdio.h>

int main() {
    int n;

    printf("Enter the size of the square matrix (n): ");
    scanf("%d", &n);

    int matrix[n][n];
    printf("Enter %d integers for the %dx%d matrix:\n", n * n, n, n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("Major diagonal: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", matrix[i][i]);
    }
    printf("\n");

    printf("Minor diagonal: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", matrix[i][n - i - 1]);
    }
    printf("\n");

    return 0;
}
