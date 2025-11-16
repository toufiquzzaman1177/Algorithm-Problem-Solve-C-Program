/*WAP that will take 9 integers into a 3 by 3 array (2D) and show them as traditional matrix
view.*/

#include <stdio.h>

int main() {
    int matrix[3][3];

    printf("Enter 9 integers for the 3x3 matrix:\n");
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            printf("Enter element at [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("\nThe matrix is:\n");
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}

//41240102158
