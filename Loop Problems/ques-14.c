#include <stdio.h>

int main() {
    int n, r, i, numerator = 1, denominator = 1;

    printf("Enter the values of n (n >= r): ");
    scanf("%d", &n);

    printf("Enter the values of r (n >= r): ");
    scanf("%d", &r);

    // Calculate the numerator (n!)
    for (i = 1; i <= n; i++) {
        numerator = numerator * i;
    }

    // Calculate the denominator (r! * (n-r)!)
    for (i = 1; i <= r; i++) {
        denominator = denominator * i;
    }
    for (i = 1; i <= (n - r); i++) {
        denominator = denominator * i;
    }
    

    // Calculate nCr
    int nCr = numerator / denominator;

    printf("C(%d, %d) = %d\n", n, r, nCr);

    return 0;
}