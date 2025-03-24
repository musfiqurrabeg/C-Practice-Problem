#include <stdio.h>

int main() {
    int n;

    printf("Enter N: ");
    scanf("%d", &n);
    int Arr[n];

    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &Arr[i]);
    }

    for (int i = 0; i < n; i++) {
        if (i % 2 != 0) {
            Arr[i] = 0;
        }
    }

    printf("After replacing odd-indexed elements with 0: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", Arr[i]);
    }

    printf("\n");
    return 0;
}
