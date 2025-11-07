/*WAP that will take n integer numbers into an array, and then find the maximum -
minimum among them with its index position.*/

#include <stdio.h>

int main() {
    int n, i, max, min, maxIndex, minIndex;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    max = min = arr[0];
    maxIndex = minIndex = 0;

    for (i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
            maxIndex = i;
        }
        if (arr[i] < min) {
            min = arr[i];
            minIndex = i;
        }
    }

    int difference = max - min;

    printf("Maximum value: %d at index %d\n", max, maxIndex);
    printf("Minimum value: %d at index %d\n", min, minIndex);
    printf("Maximum - Minimum = %d\n", difference);

    return 0;
}
