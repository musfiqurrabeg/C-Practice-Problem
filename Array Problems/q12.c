#include <stdio.h>

int main() {
    int n; 
    int number, position;

    printf("Enter n: ");
    scanf("%d", &n);

    int arr[n + 1]; // Create an array with one extra space for insertion

    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the number to insert: ");
    scanf("%d", &number);

    printf("Enter the position to insert: ");
    scanf("%d", &position);

    if (position < 0 || position > n) {
        printf("Invalid position!\n");
    } else {
        // Shift elements to the right from the position
        for (int i = n; i > position; i--) {
            arr[i] = arr[i - 1];
        }
        // Insert the number at the specified position
        arr[position] = number;
        printf("Updated Array:\n");
        for (int i = 0; i <= n; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }

    return 0;
}
