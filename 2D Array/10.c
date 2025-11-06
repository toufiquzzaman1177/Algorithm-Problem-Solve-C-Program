/*WAP that will take (n x n) integer inputs into a square matrix of dimension n (where n must be an odd number). Then calculate sum of the integers based on following position
pattern (consider only the boxed position during the sum). Please see the input-output.*/

#include <stdio.h>

int main() {
    int n;

    // Taking input for the size of the matrix (n x n)
    printf("Enter the size of the square matrix (n x n) where n is odd: ");
    scanf("%d", &n);

    // Checking if n is odd
    if (n % 2 == 0) {
        printf("Please enter an odd number for n.\n");
        return 1;
    }

    // Declaring the 2D array (matrix)
    int matrix[n][n];

    // Taking input for the matrix elements
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("Element at position (%d, %d): ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }

    // Variables to store the sum of boxed elements
    int sum = 0;

    // Sum elements from the first row (boxed positions)
    for (int j = 0; j < n; j++) {
        sum += matrix[0][j];  // First row
    }

    // Sum elements from the last row (boxed positions)
    for (int j = 0; j < n; j++) {
        sum += matrix[n-1][j];  // Last row
    }

    // Sum elements from the first column (boxed positions), excluding already counted corners
    for (int i = 1; i < n-1; i++) {
        sum += matrix[i][0];  // First column (excluding the corners)
    }

    // Sum elements from the last column (boxed positions), excluding already counted corners
    for (int i = 1; i < n-1; i++) {
        sum += matrix[i][n-1];  // Last column (excluding the corners)
    }

    // Displaying the sum of boxed positions
    printf("\nThe sum of the boxed positions is: %d\n", sum);

    return 0;
}
