#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of terms (N): ");
    scanf("%d", &n);

    int sum = 0;

    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            sum -= i;
        } else {
            sum += i;
        }
    }

    printf("Result: %d\n", sum);

    return 0;
}
