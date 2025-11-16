/*WAP that will take inputs of m x n sized matrix into a 2D array and find the maximum
element with index locationfrom that matrix.*/

#include <stdio.h>

int main() {
    int m, n;

    printf("Enter the number of rows (m): ");
    scanf("%d", &m);
    printf("Enter the number of columns (n): ");
    scanf("%d", &n);

    int matrix[m][n];

    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("Element at position (%d, %d): ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }

    int max = matrix[0][0];
    int maxRow = 0, maxCol = 0;

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (matrix[i][j] > max) {
                max = matrix[i][j];
                maxRow = i;
                maxCol = j;
            }
        }
    }

    printf("\nThe maximum element is %d at position (%d, %d)\n", max, maxRow + 1, maxCol + 1);

    return 0;
}
