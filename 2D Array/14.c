/*WAP that will take (m x n) positive integer inputs into a matrix of dimension m x n. Now
replace all the duplicate integers by -1 in that matrix. Finally display it.*/

#include <stdio.h>

int main() {
    int m, n;

    printf("Enter the number of rows (m): ");
    scanf("%d", &m);
    printf("Enter the number of columns (n): ");
    scanf("%d", &n);

    int matrix[m][n];
    int duplicate;

    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (matrix[i][j] != -1) {
                duplicate = 0;
                for (int x = 0; x < m; x++) {
                    for (int y = 0; y < n; y++) {
                        if ((x != i || y != j) && matrix[x][y] == matrix[i][j]) {
                            duplicate = 1;
                            break;
                        }
                    }
                    if (duplicate) {
                        break;
                    }
                }
                if (duplicate) {
                    matrix[i][j] = -1;
                }
            }
        }
    }

    printf("The modified matrix is:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}

//wrong
