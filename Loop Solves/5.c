/*Write a program (WAP) that will take two numbers X and Y as inputs. Then it will print
the square of X and increment (if X&lt;Y) or decrement (if X&gt;Y) X by 1, until X reaches Y. If
and when X is equal to Y, the program prints “Reached!”*/

#include <stdio.h>

int main() {
    int X, Y;

    // Input the values of X and Y
    printf("Enter the value of X: ");
    scanf("%d", &X);
    printf("Enter the value of Y: ");
    scanf("%d", &Y);

    // Loop until X reaches Y
    while (X != Y) {
        // Print the square of X
        printf("%d^2 = %d\n", X, X * X);

        // Increment or decrement X based on the condition
        if (X < Y) {
            X++;
        } else {
            X--;
        }
    }

    // When X equals Y, print "Reached!"
    printf("Reached!\n");

    return 0;
}


