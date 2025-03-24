#include <stdio.h>

int main() {
    int m, n;
    printf("Enter the number of rows (m) and columns (n): ");
    scanf("%d %d", &m, &n);

    int matrix[m][n];
    int seen[1000] = {0}; 

    // Input matrix elements
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Replace duplicates with -1
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            int value = matrix[i][j];
            if (seen[value] == 1) {
                matrix[i][j] = -1;
            } else {
                seen[value] = 1;
            }
        }
    }

    printf("Modified matrix:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
