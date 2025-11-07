/*Wap that will take n integer numbers in an array, n different integer numbers in a second
array and put the sum of the same indexed numbers from the two arrays in a third array.*/

#include <stdio.h>

int main() {
    int n;

    printf("Enter the number of elements in the arrays: ");
    scanf("%d", &n);

    int array1[n], array2[n], sumArray[n];

    printf("Enter %d integers for the first array:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &array1[i]);
    }

    printf("Enter %d integers for the second array:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &array2[i]);
    }

    for (int i = 0; i < n; i++) {
        sumArray[i] = array1[i] + array2[i];
    }

    printf("The sum of corresponding elements from the two arrays is:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", sumArray[i]);
    }
    printf("\n");

    return 0;
}

