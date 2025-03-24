#include<stdio.h>

int main () {
    int n;
    printf("Enter n: ");
    scanf("%d",&n);

    for (int i = 1; i <= n; i++){ // Loop to print '*' n times in each row
        for(int j = i; j <= n; j++){
            printf("* ");
        }
        // Move to the next line after each row
        printf("\n");
    }
    return 0;
}
