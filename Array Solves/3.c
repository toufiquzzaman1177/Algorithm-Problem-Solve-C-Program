/*WAP that will take n integer numbers into an array, and then sum up all the even integers in that
array.*/

#include <stdio.h>

int main() {
    int n;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    int sum = 0;

    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);

        if (arr[i] % 2 == 0) {
            sum += arr[i];
        }
    }


    printf("The sum of all even integers in the array is: %d\n", sum);

    return 0;
}


