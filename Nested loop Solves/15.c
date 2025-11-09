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

    for (int i = 1; i <= n; i++) {

        if (i == 1 || i == n) {
            for (int j = 1; j <= n; j++) {
                printf("Z");
            }
        }

        else {
            for (int j = 1; j <= n; j++) {
                if (j == (n - i + 1)) {
                    printf("Z");
                } else {
                    printf(" ");
                }
            }
        }
        printf("\n");
    }

    return 0;
}
