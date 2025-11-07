/*WAP that will take n floating point numbers into an array, and then find the average of those
numbers.*/

#include <stdio.h>

int main() {
    int n;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    float arr[n];
    float sum = 0.0;

    printf("Enter %d floating-point numbers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%f", &arr[i]);
        sum += arr[i];
    }

    float average = sum / n;

    printf("The average of the numbers is: %.2f\n", average);

    return 0;
}


