#include <stdio.h>

int main() {
    int n, i, num, sum = 0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        num = 0;
        for (int j = 1; j <= i; j++) {
            num = num * 10 + j;
        }
        sum += num;
    }

    printf("Sum of the series up to %d terms: %d\n", n, sum);

    return 0;
}
