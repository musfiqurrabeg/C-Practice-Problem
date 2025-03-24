#include<stdio.h>

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) { // Loop for each number in the row
        for (int j = i; j < i + i; j++) {
            printf("%d", j);
        }
        printf("\n"); // Move to the next line after each row
    }

    return 0;
}