#include <stdio.h>

int main() {
    int n, m;

    printf("Enter Array A: ");
    scanf("%d", &n);
    int A[n];

    printf("Enter %d elements of Array A: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }

    printf("Enter Array B: ");
    scanf("%d", &m);
    int B[m];

    printf("Enter %d elements in Array B: ", m);
    for (int i = 0; i < m; i++) {
        scanf("%d", &B[i]);
    }

    printf("Intersection of array A and B: ");
    int found = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (A[i] == B[j]) {
                printf("%d ", A[i]);
                found = 1;
                break;
            }
        }
    }

    if (!found) {
        printf("Empty set");
    }

    printf("\n");
    return 0;
}
