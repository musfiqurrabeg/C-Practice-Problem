#include<stdio.h>

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    if (n % 2 == 0) {
        printf("Please enter an odd integer.\n");
    } else {
        for (int i = 1; i <= (n + 1) / 2; i++) {
        // Print spaces before the stars
        for (int j = 1; j <= (n + 1) / 2 - i; j++) {
            printf("_");
        }
        // Print stars (odd number of stars: 2 * i - 1)
        for (int j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        // Move to the next line after each row
        printf("\n");
    }

    for (int i = (n - 1) / 2; i >= 1; i--) {
        // Print spaces before the stars
        for (int j = 1; j <= (n + 1) / 2 - i; j++) {
            printf("_");
        }
        // Print stars (odd number of stars: 2*i - 1)
        for (int j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        // Move to the next line after each row
        printf("\n");
    }
    }

    return 0;
}