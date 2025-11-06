/*Write a program (WAP) that will calculate the result for the first N th terms of the following
series. [In that series sum, dot sign (.) means multiplication]
1 2 .2 + 2 2 .3 + 3 2 .4 + 4 2 .5 + …….*/

#include <stdio.h>

int main() {
    int N, i;
    long long sum = 0;

    printf("Enter the number of terms (N): ");
    scanf("%d", &N);

    for (i = 1; i <= N; i++) {
        sum += (i * i) * (i + 1);
    }

    printf("The sum of the first %d terms is: %lld\n", N, sum);

    return 0;
}

