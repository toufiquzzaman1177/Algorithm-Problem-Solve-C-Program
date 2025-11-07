/*WAP that will take n integer numbers into an array, and then sum up all the even indexed
integers in that array.*/

#include <stdio.h>

int main() {
    int n, sum = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i += 2) {
        sum += arr[i];
    }

    printf("Sum of even-indexed elements: %d\n", sum);

    return 0;
}
