#include <stdio.h>

int main() {
    int n, searchN, found = 0;

    printf("Enter n: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d integers: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the number to search: ");
    scanf("%d", &searchN);

    if (!found) {
        printf("NOT FOUND");
    } else{
        printf("FOUND at index positions: ");
        for (int i = 0; i < n; i++) {
            if (arr[i] == searchN) {
                printf("%d ", i);
                found = 1;
            }
        }
    }

    return 0;
}
