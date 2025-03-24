#include<stdio.h>

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        // Print spaces before numbers
        for (int j = 1; j <= n - i; j++) {
            printf("_");
        }
        // Print the numbers
        for (int j = 1; j <= i; j++) {
            printf("%d", i);
        }
        // Move to the next line after each row
        printf("\n");
    }

    return 0;
}