#include<stdio.h>

int main() {
    int n;

    printf("Enter N: ");
    scanf("%d", &n);

    if (n % 2 == 0) {
        printf("Please enter an odd integer.\n");
    } else {
            for (int i = 1; i <= n; i++) {
                for (int j = 1; j <= n; j++) {
                    if (i == 1 || i == n || i == (n + 1) / 2) {
                        printf("* ");
                    }
                    else if (j == 1 || j == n) {
                        printf("* ");
                    } else {
                        printf("_ ");
                    }
                }
                printf("\n");
            }
    }
    return 0;
}