/* Write a program (WAP) that will take two numbers X and Y as inputs. Then it will print
the square of X and increment (if X<Y) or decrement (if X>Y) X by 1, until X reaches Y. If
and when X is equal to Y, the program prints “Reached!”  */

#include <stdio.h>

int main() {
    int X, Y, result;

    printf("Enter two numbers (X Y)\n");

    printf("Enter X : ");
    scanf("%d", &X);

    printf("Enter Y : ");
    scanf("%d",&Y);

    if (X == Y) {
        printf("Reached!\n");
    } else {
        while (X != Y) {
            result = X * X;
            printf("%d", result);

            if (X < Y) {
                X++;  // Increment X if X < Y
            } else {
                X--;  // Decrement X if X > Y
            }

            if (X != Y) {
                printf(", \n");
            }
        }
        printf(", Reached!\n");
    }

    return 0;
}
