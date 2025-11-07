/*WAP that will take n integers into an array A. Now remove all duplicates numbers from
that array. Finally print all elements from that array.*/

#include <stdio.h>

int removeDuplicates(int arr[], int n) {
    if (n == 0 || n == 1)
        return n;

    int temp[n];
    int j = 0;

    for (int i = 0; i < n - 1; i++) {
        for (int k = i + 1; k < n; k++) {
            if (arr[i] > arr[k]) {
                int tempVal = arr[i];
                arr[i] = arr[k];
                arr[k] = tempVal;
            }
        }
    }

    for (int i = 0; i < n - 1; i++) {
        if (arr[i] != arr[i + 1]) {
            temp[j++] = arr[i];
        }
    }
    temp[j++] = arr[n - 1];

    for (int i = 0; i < j; i++) {
        arr[i] = temp[i];
    }

    return j;
}

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    n = removeDuplicates(arr, n);

    printf("Array after removing duplicates: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
