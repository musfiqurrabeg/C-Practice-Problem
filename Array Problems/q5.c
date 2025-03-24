// Note: Questions 3 and 5 in the coding assignment are identical.
#include<stdio.h>

int main() {
    int n, sum = 0;
    int i;

    printf("Enter N: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d numbers: ", n);
    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);
        if (arr[i] % 2 == 0){
            sum += arr[i];
        }
    }

    printf("Sum of Even integers %d", sum);
    return 0;
}