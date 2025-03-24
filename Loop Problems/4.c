#include <stdio.h>

int main() {
    int n;
    float number, sum = 0.0;

    printf("Enter the number of inputs: ");
    scanf("%d", &n);

    printf("Enter %d numbers:\n", n);

    for (int i = 0; i < n; i++) {
        printf("Enter Number: ");
        scanf("%f", &number);
        sum += number;
    }

    printf("AVG of %d inputs: %.6f\n", n, sum / n);

    return 0;
}
