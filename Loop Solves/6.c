/*Write a program (WAP) for the described scenario:
Player-1 picks a number X and Player-2 has to guess that number within N tries. For each
wrong guess by Player-2, the program prints “Wrong, N-1 Choice(s) Left!” If Player-2 at
any time successfully guesses the number, the program prints “Right, Player-2 wins!” and
terminates right away. Otherwise after the completion of N wrong tries, the program
prints “Player-1 wins!” and halts.
(Hint: Use break/continue)*/

#include <stdio.h>

int main() {
    int X, guess, N;

    printf("Player-1, enter the number X: ");
    scanf("%d", &X);

    printf("Enter the number of tries (N) for Player-2: ");
    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        printf("Player-2, guess the number: ");
        scanf("%d", &guess);

        if (guess == X) {
            printf("Right, Player-2 wins!\n");
            break;
        } else {
            printf("Wrong, %d Choice(s) Left!\n", N - i - 1);
            continue;
        }
    }

    if (guess != X) {
        printf("Player-1 wins!\n");
    }

    return 0;
}

