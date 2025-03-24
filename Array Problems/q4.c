#include <stdio.h>

int main() {
    int n;
    double sum = 0.0;

    printf("Enter n: ");
    scanf("%d", &n);

    double arr[n];

    printf("Enter %d floating numbers: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%lf", &arr[i]);
        sum += arr[i];
    }

    double average = sum / n;
    printf("Average of the numbers: %.2f\n", average);

    return 0;
}
