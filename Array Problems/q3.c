// Note: Questions 3 and 5 in the coding assignment are identical.
#include <stdio.h>

int main() {
    int n, sum = 0;

    printf("Enter n: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d integers: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] % 2 == 0) {
            sum += arr[i];
        }
    }
    printf("Sum of the even is : %d\n", sum);

    return 0;
}
