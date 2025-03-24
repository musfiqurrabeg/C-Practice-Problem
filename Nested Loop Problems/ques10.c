#include<stdio.h>

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) { // Print spaces before the stars
        for (int j = 1; j <= n - i; j++) {
            printf("_ ");
        }
        // Print stars
        for (int j = 1; j <= i; j++) {
            printf("* ");
        }
        // Move to the next line after each row
        printf("\n");
    }

    return 0;
}