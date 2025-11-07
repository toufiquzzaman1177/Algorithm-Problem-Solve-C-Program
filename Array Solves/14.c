/*WAP that will first take n integers into an array A and then m integers into array B. Now
swap all elements between array A and B. Finally show all elements of both array A and B.*/

#include <stdio.h>

void swapArrays(int A[], int B[], int n, int m) {
    int maxSize = (n > m) ? n : m;
    for(int i = 0; i < maxSize; i++) {
        int temp = A[i];
        A[i] = B[i];
        B[i] = temp;
    }
}

int main() {
    int n, m;

    printf("Enter the number of elements in Array A: ");
    scanf("%d", &n);
    int A[n];

    printf("Enter %d elements for Array A: ", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }

    printf("Enter the number of elements in Array B: ");
    scanf("%d", &m);
    int B[m];

    printf("Enter %d elements for Array B: ", m);
    for(int i = 0; i < m; i++) {
        scanf("%d", &B[i]);
    }

    swapArrays(A, B, n, m);

    printf("\nArray A after swap: ");
    for(int i = 0; i < m; i++) {
        printf("%d ", A[i]);
    }

    printf("\nArray B after swap: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", B[i]);
    }

    return 0;
}
