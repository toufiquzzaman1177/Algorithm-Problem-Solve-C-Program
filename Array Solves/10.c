/*WAP that will take n integers into an array, and then search a number into that array. If
found then print its index. If not found then print “NOT FOUND”.*/

#include <stdio.h>

int main() {
    int n, i, searchNum, found = 0, index = -1;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the number to search: ");
    scanf("%d", &searchNum);

    for (i = 0; i < n; i++) {
        if (arr[i] == searchNum) {
            found = 1;
            index = i;
            break;
        }
    }

    if (found)
        printf("Number %d found at index %d\n", searchNum, index);
    else
        printf("NOT FOUND\n");

    return 0;
}
