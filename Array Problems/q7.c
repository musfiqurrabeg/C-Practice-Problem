#include <stdio.h>

int main() {
    int n;

    printf("Enter N: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d integers: ", n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Reversed array:\n");

    for (int i = n - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }

    printf("\n\n");

    return 0;
}
