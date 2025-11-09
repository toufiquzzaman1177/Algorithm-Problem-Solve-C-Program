/*WAP that will print a pattern based on the input integer n. Please see the sample input
output.*/

#include <stdio.h>

void printPattern(int n) {
    for (int i = 1; i <= n; i++) {

        for (int j = 1; j <= n - i; j++) {
            printf("_");
        }

        for (int j = 1; j <= i; j++) {
            printf("%d", i);
        }
        printf("\n");
    }
}

int main() {
    int n;

    printf("Enter an integer: ");
    scanf("%d", &n);

    printPattern(n);

    return 0;
}
