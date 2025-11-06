/*Write a program (WAP) that will print following series upto N th terms.
1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31 …….*/

#include <stdio.h>

void printOddSeries(int n) {
    printf("Series of odd numbers up to %d terms: ", n);
    for (int i = 1; i <= 2 * n - 1; i += 2) {
        printf("%d", i);
        if (i < 2 * n - 1) {
            printf(", ");
        }
    }
    printf("\n");
}

int main() {
    int n;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printOddSeries(n);

    return 0;
}

