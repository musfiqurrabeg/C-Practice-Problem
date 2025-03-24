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
        if (Arr[i] % 3 == 0) {
            Arr[i] = -1;
        }
    }
    printf("After replacing multiples of 3 with -1: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", Arr[i]);
    }
    printf("\n");
    return 0;
}
