/*WAP that will print a pattern based on the input odd integer n. Please see the sample
input output.*/

#include <stdio.h>

int main() {
    int n;

    printf("Enter an odd integer n: ");
    scanf("%d", &n);

    if (n % 2 == 0) {
        printf("Please enter an odd integer.\n");
        return 1;
    }

    int mid = (n / 2) + 1;


    for (int i = 1; i <= mid; i++) {

        for (int j = 1; j <= mid - i; j++) {
            printf(" ");
        }

        for (int j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
        printf("\n");
    }

    for (int i = mid - 1; i >= 1; i--) {

        for (int j = 1; j <= mid - i; j++) {
            printf(" ");
        }

        for (int j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
