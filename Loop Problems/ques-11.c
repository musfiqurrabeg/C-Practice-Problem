#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of terms (N): ");
    scanf("%d", &n);

    float sum = 0;

    for (int i = 1; i <= n; i++) {
        sum += i * i * (i + 1); // Each term is i * (i + 1)
    }

    printf("Result: %.0f\n", sum);
    return 0;
}
