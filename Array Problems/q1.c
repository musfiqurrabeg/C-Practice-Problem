#include <stdio.h>

int main() {
    int n;

    printf("Enter n: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d integers: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Reversed order: ");
    for (int i = n - 1; i >= 0; i--) { // Print the integers in reverse order
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
