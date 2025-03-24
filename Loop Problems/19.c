#include <stdio.h>
#include <math.h>

#define PI 3.14159265

int main() {
    double x, term, sinx = 0, sign = 1, factorial = 1;
    int i, n;

    printf("Enter the value of x in radians: ");
    scanf("%lf", &x);

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    for (i = 1; i <= 2 * n; i += 2) {
        term = sign * pow(x, i) / factorial;
        sinx += term;
        sign *= -1;
        factorial *= (i + 1) * (i + 2);
    }

    printf("sin(%lf) = %lf\n", x, sinx);

    return 0;
}
