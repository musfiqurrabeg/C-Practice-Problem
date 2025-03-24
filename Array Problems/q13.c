#include <stdio.h>

int main() {
    int n, position;

    printf("Enter n: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Array size must be greater than 0!\n");
        return 1;
    }

    int arr[n];
    printf("Enter %d elements of the array: \n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter any position to delete: ");
    scanf("%d", &position);

    if (position < 0 || position >= n) {
        printf("Invalid position!\n");
        return 1;
    } else {
        for (int i = position; i < n - 1; i++) {
            arr[i] = arr[i + 1];
        }

        n--; // Decrease the size of the array
        printf("Array after deletion: \n");
        for (int i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }
    return 0;
}
