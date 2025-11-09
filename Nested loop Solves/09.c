/*WAP that will print a pattern based on the input integer n. Please see the sample input
output.*/

#include <stdio.h>

int main() {
    int n;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++) {

        for(int j = 0; j < n; j++) {

            printf("%d", (i + j) % 2);
        }
        printf("\n");
    }

    return 0;
}
