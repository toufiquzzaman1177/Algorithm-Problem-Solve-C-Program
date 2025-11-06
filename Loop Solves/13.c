/*Write a program (WAP) that will print the factorial (N!) of a given number N. Please see
the sample input output.*/

#include <stdio.h>

int main() {
    int N, i;
    unsigned long long factorial = 1;

    printf("Enter a non-negative integer (N): ");
    scanf("%d", &N);

    if (N < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {

        for (i = 1; i <= N; i++) {
            factorial *= i;
        }

        printf("%d! = %llu\n", N, factorial);
    }

    return 0;
}


