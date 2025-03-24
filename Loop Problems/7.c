/* 

Write a program (WAP) that will run and show keyboard inputs until the user types an ’A’
at the keyboard.

*/

#include <stdio.h>

int main() {
    char input;
    int count = 1;

    printf("Enter characters (type 'A' to stop): ");

    while (input != 'A') {
        scanf(" %c", &input);

        if (input != 'A') {
            printf("Input %d: %c\n", count, input);
            count++;
        }
    }

    return 0;
}
