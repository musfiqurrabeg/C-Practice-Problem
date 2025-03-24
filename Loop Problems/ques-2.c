/*

2. Write a program (WAP) that will print following series upto Nth terms.
1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31 …….

*/

#include<stdio.h>

int main() {

    int number;
    printf("Enter Number : ");
    scanf("%d", &number);

    for(int i=1; i<=number; i+=2) {
        printf("%d\n", i);
    }

    return 0;
}