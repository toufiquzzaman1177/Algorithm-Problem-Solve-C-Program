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

    int mid = n / 2;
    for (int i = 0; i < n; i++) {

        if (i == mid) {
            for (int j = 0; j < n; j++) {
                printf("H ");
            }
        }

        else {
            printf("H");
            for (int j = 1; j < n - 1; j++) {
                printf("  ");
            }
            printf(" H");
        }
        printf("\n");
    }

    return 0;
}
