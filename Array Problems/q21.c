#include <stdio.h>

int main() {
    int n, m;

    printf("Enter Array A size: ");
    scanf("%d", &n);
    int A[n];

    printf("Enter %d elements of array A: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }

    printf("Enter Array B size: ");
    scanf("%d", &m);
    int B[m];

    printf("Enter %d elements of array B: ", m);
    for (int i = 0; i < m; i++) {
        scanf("%d", &B[i]);
    }

    // To store the difference A - B
    int Difference[n];
    int k = 0;

    for (int i = 0; i < n; i++) {
        int Present = 0;
        for (int j = 0; j < m; j++) {
            if (A[i] == B[j]) {
                Present = 1;
                break;
            }
        }
        if (!Present) {
            Difference[k++] = A[i];
        }
    }

    printf("Difference (A - B): ");
    if (k == 0) {
        printf("Empty set");
    } else {
        for (int i = 0; i < k; i++) {
            printf("%d ", Difference[i]);
        }
    }

    printf("\n");
    return 0;
}
