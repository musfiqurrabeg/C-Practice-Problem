#include <stdio.h>
#include <ctype.h>

int main() {
    int n; 
    int count = 0;

    printf("Enter the number of alphabets: ");
    scanf("%d", &n);

    char arr[n];

    printf("Enter Anything : ");
    for (int i = 0; i < n; i++) {
        scanf(" %c", &arr[i]); // Note: Space before %c to handle newline issues
        arr[i] = toupper(arr[i]); // Convert to uppercase for consistency
    }

    for (int i = 0; i < n; i++) {
        if (arr[i] == 'A' || arr[i] == 'E' || arr[i] == 'I' || arr[i] == 'O' || arr[i] == 'U') {
            count++;
        }
    }
    printf("Alphabet Count: %d\n", count);

    return 0;
}
