/* 

Write a program (WAP) for the described scenario:

Player-1 picks a number X and Player-2 has to guess that number within N tries. For each
wrong guess by Player-2, the program prints “Wrong, N-1 Choice(s) Left!” If Player-2 at
any time successfully guesses the number, the program prints “Right, Player-2 wins!” and
terminates right away. Otherwise after the completion of N wrong tries, the program
prints “Player-1 wins!” and halts.

(Hint: Use break/continue)  

*/

#include <stdio.h>

int main() {
    int X, N, guess;
    
    // Input Player-1's chosen number and maximum number of tries

    printf("Player-1, enter the number to guess (X): ");
    scanf("%d", &X);

    printf("Enter the maximum number of tries (N): ");
    scanf("%d", &N);
    
    
    for (int i = 0; i < N; i++) {   // Loop for Player-2's attempts
        printf("Player-2, enter your guess: ");
        scanf("%d", &guess);

        if (guess == X) {
            printf("Right, Player-2 wins!\n");
            return 0;    // Terminate the program immediately

        } else {
            printf("Wrong, %d Choice Left!\n", N - i - 1);
        }
    }
    
    printf("Player-1 wins!\n");  // If loop finishes, Player-2 failed to guess correctly

    return 0;
}
