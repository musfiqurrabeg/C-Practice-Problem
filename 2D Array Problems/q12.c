    #include <stdio.h>

    int main() {
        int m, n;

        printf("Enter the number of rows (m) and columns (n): ");
        scanf("%d %d", &m, &n);

        int matrix[m][n];
        printf("Enter the elements of the matrix:\n");
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                scanf("%d", &matrix[i][j]);
            }
        }

        // Reversal of the matrix
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n / 2; j++) {
                int temp = matrix[i][j];
                matrix[i][j] = matrix[i][n - 1 - j];
                matrix[i][n - 1 - j] = temp;
            }
        }
        printf("Reversed matrix:\n");
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                printf("%d ", matrix[i][j]);
            }
            printf("\n");
        }

        return 0;
    }