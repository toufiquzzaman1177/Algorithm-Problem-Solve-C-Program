/*WAP that will take n integer numbers as input in an array and then delete a number from
a position specified by the user in the array.*/

#include <stdio.h>

int main() {
    int n, pos;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int A[n];

    printf("Enter %d elements: ", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }

    printf("Enter the position to delete (0 to %d): ", n - 1);
    scanf("%d", &pos);

    if(pos < 0 || pos >= n) {
        printf("Invalid position!\n");
        return 1;
    }

    for(int i = pos; i < n - 1; i++) {
        A[i] = A[i + 1];
    }
    n--;

    printf("\nUpdated Array: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", A[i]);
    }

    return 0;
}
