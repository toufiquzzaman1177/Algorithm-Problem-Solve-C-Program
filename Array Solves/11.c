/*WAP that will take n integers into an array A, and then copy all numbers in reverse order
from array A to another array B. Finally show all elements of both array A and B.*/

#include <stdio.h>

int main() {
    int n;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int A[n], B[n];

    printf("Enter %d elements: ", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }

    for(int i = 0; i < n; i++) {
        B[i] = A[n - i - 1];
    }

    printf("\nArray A: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", A[i]);
    }

    printf("\nArray B (Reversed): ");
    for(int i = 0; i < n; i++) {
        printf("%d ", B[i]);
    }

    return 0;
}
