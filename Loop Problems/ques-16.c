#include <stdio.h>

int main() {
    int num1, num2, i, gcd, lcm;

    printf("Enter Numebr 1 : ");
    scanf("%d", &num1);
    printf("Enter Number 2 : ");
    scanf("%d", &num2);

    int smaller = num1 < num2 ? num1 : num2;
    for (i = smaller; i >= 1; i--) {
        if (num1 % i == 0 && num2 % i == 0) {
            gcd = i;
            break;
        }
    }

    lcm = (num1 * num2) / gcd;

    printf("GCD of %d and %d is %d\n", num1, num2, gcd);
    printf("LCM of %d and %d is %d\n", num1, num2, lcm);

    return 0;
}