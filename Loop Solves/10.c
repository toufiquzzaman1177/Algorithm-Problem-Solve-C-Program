/*Write a program (WAP) that will give the sum of first N th terms for the following series.

1, -2, 3, -4, 5, -6, 7, -8, 9, -10, 11, -12, 13, -14, …….*/

#include <stdio.h>

int main() {
    int N, i;
    long long sum = 0;

    printf("Enter the number of terms (N): ");
    scanf("%d", &N);

    for (i = 1; i <= N; i++) {
        if (i % 2 == 0) {
            sum -= i;
        } else {
            sum += i;
        }
    }

    printf("The sum of the first %d terms is: %lld\n", N, sum);

    return 0;
}

