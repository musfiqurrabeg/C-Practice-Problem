#include<stdio.h>

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    for (int i = n; i >= 1; i--) { // Loop to print numbers in descending order
        for (int j = n; j >= i; j--) {
            printf("%d", j);
        }
        printf("\n"); // Move to the next line after each row
    }

    return 0;
}