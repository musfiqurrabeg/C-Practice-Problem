#include<stdio.h>

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {// Loop to print each number in the row
        for (int j = 1; j <= n; j++) {
            printf("%d", j);
        }
        printf("\n"); // Move to the next line after each row
    }

    return 0;
}