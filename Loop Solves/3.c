/*Write a program (WAP) that will print following series upto N th terms.
1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, …….*/

#include <stdio.h>

int main() {
    int N;

    printf("Enter the number of terms (N): ");
    scanf("%d", &N);

    for (int i = 1; i <= N; i++) {
        if (i % 2 == 1) {
            printf("1");
        } else {
            printf("0");
        }

        if (i < N) {
            printf(", ");
        }
    }

    printf("\n");

    return 0;
}
