/*WAP that will take n integers into an array A and m positive integers into array B. Now
find the union (set operation) of array A and B.*/

#include <stdio.h>

int existsInArray(int arr[], int size, int element) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == element)
            return 1;
    }
    return 0;
}

void findUnion(int A[], int n, int B[], int m) {
    int unionArr[n + m];
    int k = 0;

    for (int i = 0; i < n; i++) {
        if (!existsInArray(unionArr, k, A[i])) {
            unionArr[k++] = A[i];
        }
    }

    for (int i = 0; i < m; i++) {
        if (!existsInArray(unionArr, k, B[i])) {
            unionArr[k++] = B[i];
        }
    }

    printf("Union of A and B: ");
    for (int i = 0; i < k; i++) {
        printf("%d ", unionArr[i]);
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

    findUnion(A, n, B, m);

    return 0;
}
