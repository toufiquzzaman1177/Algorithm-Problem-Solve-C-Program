/*Write a program (WAP) that will take N numbers as inputs and compute their average.
(Restriction: Without using any array)*/

#include <stdio.h>

int main() {
    int N;
    float number, sum = 0.0;

    printf("Enter the number of inputs (N): ");
    scanf("%d", &N);

    for (int i = 1; i <= N; i++) {
        printf("Enter number %d: ", i);
        scanf("%f", &number);
        sum += number; // Add the number to the sum
    }

    float average = sum / N;

    printf("The average of the %d numbers is: %.2f\n", N, average);

    return 0;
}

