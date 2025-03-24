#include <stdio.h>

int main() {
    int m, n;
    int sum = 0;

    printf("Enter the number of rows and columns (m,n): ");
    scanf("%d %d", &m, &n);
    printf("\n");
    
    int matrix[m][n];
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
            sum += matrix[i][j];
        }
    }
    printf("\n");
    
    printf("Sum of all elements: %d\n", sum);

    return 0;
}
