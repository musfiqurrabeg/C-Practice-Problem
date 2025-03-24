/*

1. Write a program (WAP) that will print following series upto Nth terms.
   1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14

*/

#include<stdio.h>

int main() {

    int number;
    printf("Enter Number : ");
    scanf("%d", &number);

    for(int i=1; i<=number; i++) {
        printf("%d\n", i);
    }

    return 0;
}
