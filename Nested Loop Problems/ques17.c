#include<stdio.h>

int main() {
    int n, mid, layer;
    printf("Enter n: ");
    scanf("%d", &n);

    if (n % 2 == 0) {
        printf("Please enter an odd integer.\n");
    } else {
        mid = (n + 1) / 2;
        for (int i = 1; i <= n; i++) {
            layer = (i <= mid) ? i : (n - i + 1);
            for (int j = 1; j <= mid - layer; j++) {
                printf("_ ");
            }
            for (int j = 1; j <= 2 * layer - 1; j++) {
                if (j % 2 == 0) {
                    printf("_ ");
                } else {
                    printf("$ ");
                }
            }
            for (int j = 1; j <= mid - layer; j++) {
                printf("_ ");
            }
            printf("\n");
        }
    }
    return 0;
}
