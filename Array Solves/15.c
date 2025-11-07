/*WAP that will take n positive integers into an array A. Now find all the integers that are
divisible by 3 and replace them by -1 in array A. Finally show all elements of array A.*/

#include <stdio.h>

int main() {
    int n;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int A[n];

    printf("Enter %d positive integers: ", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }

    for(int i = 0; i < n; i++) {
        if(A[i] % 3 == 0) {
            A[i] = -1;
        }
    }

    printf("\nUpdated Array: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", A[i]);
    }

    return 0;
}
