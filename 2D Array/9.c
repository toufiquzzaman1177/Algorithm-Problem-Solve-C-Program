/*WAP that will take (n x n) integer inputs into a square matrix of dimension n (where n must
be an odd number). Then calculate sum of the integers at first row, last row and two
diagonals without overlap. Please see the sample input-output.*/

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

    // Variables to store the sum of the first row, last row, and diagonals
    int sum = 0;

    // Summing elements in the first row
    for (int j = 0; j < n; j++) {
        sum += matrix[0][j];  // First row
    }

    // Summing elements in the last row
    for (int j = 0; j < n; j++) {
        sum += matrix[n-1][j];  // Last row
    }

    // Summing elements in the main diagonal (top-left to bottom-right)
    for (int i = 0; i < n; i++) {
        sum += matrix[i][i];  // Main diagonal
    }

    // Summing elements in the secondary diagonal (top-right to bottom-left)
    for (int i = 0; i < n; i++) {
        sum += matrix[i][n-1-i];  // Secondary diagonal
    }

    // Subtract the overlapping center element (if n is odd)
    sum -= matrix[n/2][n/2];

    // Displaying the sum
    printf("\nThe sum of the integers at the first row, last row, and both diagonals (without overlap) is: %d\n", sum);

    return 0;
}
