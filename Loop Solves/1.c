/*Write a program (WAP) that will print following series upto N th terms.
1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, …….*/

#include <stdio.h>

void printSeries(int n) {
    printf("Series up to %d terms: ", n);
    for (int i = 1; i <= n; ++i) {
        printf("%d", i);
        if (i < n) {
            printf(", ");
        }
    }
    printf("\n");
}

int main() {
    int n;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printSeries(n);

    return 0;
}

//41240102158
