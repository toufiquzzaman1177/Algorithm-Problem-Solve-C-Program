/*WAP that will take n integer numbers as input in an array and then insert a number in a
position specified by the user in the array.*/

#include <stdio.h>

int main() {
    int n, num, pos;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int A[n + 1];

    printf("Enter %d elements: ", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }

    printf("Enter the number to insert: ");
    scanf("%d", &num);
    printf("Enter the position (0 to %d): ", n);
    scanf("%d", &pos);

    if(pos < 0 || pos > n) {
        printf("Invalid position!\n");
        return 1;
    }

    for(int i = n; i > pos; i--) {
        A[i] = A[i - 1];
    }

    A[pos] = num;
    n++;

    printf("\nUpdated Array: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", A[i]);
    }

    return 0;
}
