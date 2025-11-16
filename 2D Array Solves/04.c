/*WAP that will take inputs of a n sized square matrix into a 2D array. Now show all the
elements of its two diagonals.*/

#include <stdio.h>

int main()
 {
    int n;

    printf("Enter the size of the square matrix (n x n): ");
    scanf("%d", &n);

    int matrix[n][n];

    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("Element at position (%d, %d): ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("\nMain diagonal elements: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", matrix[i][i]);
    }

    printf("\nSecondary diagonal elements: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", matrix[i][n - i - 1]);
    }

    printf("\n");

    return 0;
}
