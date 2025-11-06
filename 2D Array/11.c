/*WAP that will take (n x n) integer inputs into a square matrix of dimension n (where n
must be an odd number). Then calculate sum of the integers based on following position
pattern (consider only the boxed position during the sum). Please see the input-output.*/

#include <stdio.h>

int main() {
    int n;

    printf("Enter the size of the square matrix (n x n) where n is odd: ");
    scanf("%d", &n);

    if (n % 2 == 0) {
        printf("Please enter an odd number for n.\n");
        return 1;
    }

    int matrix[n][n];

    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    int sum = 0;

    for (int j = 0; j < n; j++) {
        sum += matrix[0][j];
    }

    for (int j = 0; j < n; j++) {
        sum += matrix[n-1][j];
    }

    for (int i = 1; i < n-1; i++) {
        sum += matrix[i][0];
    }

    for (int i = 1; i < n-1; i++) {
        sum += matrix[i][n-1];
    }

    printf("\nThe sum of the boxed positions is: %d\n", sum);

    return 0;
}
