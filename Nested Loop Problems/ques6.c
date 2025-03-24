#include<stdio.h>

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) { // Loop to print numbers from 1 to the current row number
        for (int j = 1; j <= i; j++) {
            printf("%d", j);
        }
        // Move to the next line after each row
        printf("\n");
    }

    return 0;
}