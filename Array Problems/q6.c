#include <stdio.h>

int main() {
    int n;

    printf("Enter N: ");
    scanf("%d", &n);

    int arr1[n], arr2[n], sum[n];

    // The first array
    printf("Enter elements of first array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr1[i]);
    }

    // The second array
    printf("Enter elements of second array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr2[i]);
    }

    // Calculate
    for (int i = 0; i < n; i++) {
        sum[i] = arr1[i] + arr2[i];
    }

    for (int i = 0; i < n; i++) {
        printf("%d ", sum[i]);
    }
    printf("\n");

    return 0;
}
