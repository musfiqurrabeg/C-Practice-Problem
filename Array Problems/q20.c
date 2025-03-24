#include <stdio.h>

int main() {
    int n, m;

    printf("Enter Array A: ");
    scanf("%d", &n);
    int A[n];

    printf("Enter %d elements of array A: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }

    printf("Enter Array B: ");
    scanf("%d", &m);
    int B[m];

    printf("Enter %d elements of array B: ", m);
    for (int i = 0; i < m; i++) {
        scanf("%d", &B[i]);
    }

    // To store the union
    int Union[n + m];
    int k = 0;

    // Add all elements of A to Union
    for (int i = 0; i < n; i++) {
        Union[k++] = A[i];
    }

    // Add elements of B to Union if they are not already present
    for (int i = 0; i < m; i++) {
        int isPresent = 0;
        for (int j = 0; j < n; j++) {
            if (B[i] == A[j]) {
                isPresent = 1;
                break;
            }
        }
        if (!isPresent) {
            Union[k++] = B[i];
        }
    }

    printf("Union of array A and B: ");
    for (int i = 0; i < k; i++) {
        printf("%d ", Union[i]);
    }

    printf("\n");
    return 0;
}
