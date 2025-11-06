/*Write a program (WAP) that will find n C r where n &gt;= r; n and r are integers.*/

#include <stdio.h>

long long factorial(int num) {
    long long fact = 1;
    for (int i = 1; i <= num; i++) {
        fact *= i;
    }
    return fact;
}


long long nCr(int n, int r) {
    if (n < r) {
        printf("Invalid input! n should be greater than or equal to r.\n");
        return -1;
    }
    return factorial(n) / (factorial(r) * factorial(n - r));
}

int main() {
    int n, r;

    printf("Enter values for n and r (n >= r): ");
    scanf("%d %d", &n, &r);

    if (n < r || n < 0 || r < 0) {
        printf("Invalid input! Ensure that n >= r and both are non-negative integers.\n");
        return 1;
    }

    printf("%dC%d = %lld\n", n, r, nCr(n, r));

    return 0;
}

