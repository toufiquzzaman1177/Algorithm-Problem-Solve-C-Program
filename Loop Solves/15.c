/*Write a program (WAP) that will find x y (x to the power y) where x, y are positive integers.*/

#include <stdio.h>

int main() {
    int x, y;
    long long result = 1;

    printf("Enter the value of x (positive integer): ");
    scanf("%d", &x);

    printf("Enter the value of y (positive integer): ");
    scanf("%d", &y);

    if (x < 0 || y < 0) {
        printf("Both x and y must be positive integers.\n");
    } else {
        // Calculate x^y
        for (int i = 1; i <= y; i++) {
            result *= x;
        }

        printf("%d^%d = %lld\n", x, y, result);
    }

    return 0;
}


