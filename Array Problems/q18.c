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

    // Remove duplicates
    int uniqueIndex = 0;
    for (int i = 0; i < n; i++) {
        int Duplicate = 0;
        for (int j = 0; j < uniqueIndex; j++) {
            if (Arr[i] == Arr[j]) {
                Duplicate = 1;
                break;
            }
        }
        if (!Duplicate) {
            Arr[uniqueIndex] = Arr[i];
            uniqueIndex++;
        }
    }

    printf("After removing duplicates: ");
    for (int i = 0; i < uniqueIndex; i++) {
        printf("%d ", Arr[i]);
    }

    printf("\n");
    return 0;
}
