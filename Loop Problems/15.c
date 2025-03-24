#include <stdio.h>
#include <math.h>

int main() {
    int x, y;

    printf("Enter the base (x): ");
    scanf("%d", &x);
    printf("Enter the exponent (y): ");
    scanf("%d", &y);

    double result = pow(x, y);
    printf("%d to the power of %d is: %.2lf\n", x, y, result);

    return 0;
}
