/*Write a program (WAP) that will run and show keyboard inputs until the user types an ’A’
at the keyboard.*/

#include <stdio.h>

int main() {
    char input;

    printf("Type characters (press 'A' to exit):\n");

    while (1) {
        scanf(" %c", &input);
        printf("You typed: %c\n", input);

        if (input == 'A') {
            printf("Exiting the program.\n");
            break;
        }
    }

    return 0;
}


