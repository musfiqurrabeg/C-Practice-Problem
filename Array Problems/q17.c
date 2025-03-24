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

    // Bubble sort algorithm for ascending order
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (Arr[j] > Arr[j + 1]) {
                int temp = Arr[j];
                Arr[j] = Arr[j + 1];
                Arr[j + 1] = temp;
            }
        }
    }

    printf("After sorting in ascending order: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", Arr[i]);
    }

    printf("\n");
    return 0;
}
