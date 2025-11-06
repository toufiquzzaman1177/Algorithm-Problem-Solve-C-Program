/*Write a program (WAP) that will print Fibonacci series upto N th terms.
1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, …….*/

#include <stdio.h>

int main() {
    int N, i;
    long long term1 = 1, term2 = 1, nextTerm;

    printf("Enter the number of terms (N): ");
    scanf("%d", &N);

    printf("Fibonacci series up to %d terms:\n", N);

    for (i = 1; i <= N; i++) {
        printf("%lld, ", term1);
        nextTerm = term1 + term2;
        term1 = term2;
        term2 = nextTerm;
    }

    printf("\n");

    return 0;
}


