/*WAP that will take n alphabets into an array, and then count number of vowels in that
array.*/

#include <stdio.h>
#include <ctype.h>

int main() {
    int n, i, vowelCount = 0;

    printf("Enter the number of alphabets: ");
    scanf("%d", &n);

    char alphabets[n];

    printf("Enter %d alphabets:\n", n);
    for (i = 0; i < n; i++) {
        scanf(" %c", &alphabets[i]);
    }

    for (i = 0; i < n; i++) {
        char ch = tolower(alphabets[i]);
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            vowelCount++;
        }
    }

    printf("Number of vowels in the array: %d\n", vowelCount);

    return 0;
}

