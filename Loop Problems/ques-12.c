#include <stdio.h>

int main() {
    int n;
    int a = 1, b = 1;
    printf("Enter Number : ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        printf("%d, ", a); 
        int next = a + b; 
        a = b;
        b = next;
    }

    printf("\n");
    return 0;
}
