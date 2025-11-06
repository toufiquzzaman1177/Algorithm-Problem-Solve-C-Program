/*Write a program that takes an integer number n as input and find out the sum of the
following series up to n terms.
1 + 12 + 123 + 1234 + …….*/

#include <stdio.h>

int main() {
    int n, term = 0, sum = 0;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        term = term * 10 + i;
        sum += term;
    }

    printf("Sum of the series up to %d terms is: %d\n", n, sum);

    return 0;
}

