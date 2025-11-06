/*WAP that will take the size of an identity matrix from the user and generate the identity
matrix into a 2D array. Finally display it.*/

#include <stdio.h>

int main() {
    int n;

    printf("Enter the size of the identity matrix (n x n): ");
    scanf("%d", &n);

    int matrix[n][n];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j) {
                matrix[i][j] = 1;
            } else {
                matrix[i][j] = 0;
            }
        }
    }

    printf("\nThe identity matrix is:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
