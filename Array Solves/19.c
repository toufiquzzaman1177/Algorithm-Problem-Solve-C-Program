/*WAP that will take n integers into array A and m positive integers into array B. Now find
the intersection (set operation) of array A and B.*/

#include <stdio.h>

void findIntersection(int A[], int n, int B[], int m) {
    printf("Intersection of A and B: ");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (A[i] == B[j]) {
                printf("%d ", A[i]);
                break;
            }
        }
    }
    printf("\n");
}

int main() {
    int n, m;

    printf("Enter the number of elements in array A: ");
    scanf("%d", &n);
    int A[n];
    printf("Enter %d elements for array A: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }

    printf("Enter the number of elements in array B: ");
    scanf("%d", &m);
    int B[m];
    printf("Enter %d elements for array B: ", m);
    for (int i = 0; i < m; i++) {
        scanf("%d", &B[i]);
    }

    findIntersection(A, n, B, m);

    return 0;
}
