#include <stdio.h>

int main() {
    int n, sum = 0;

    printf("Enter n: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d integers: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    printf("Sum is : %d\n", sum);

    return 0;
}
