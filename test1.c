#include <stdio.h>

int main() {
    int array[100], n, search, i;

    // Input array size
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    // Input element to search
    printf("Enter the element to search: ");
    scanf("%d", &search);
    // Linear search
    for (i = 0; i < n; i++) {
        if (array[i] == search) {
            printf("Element found at position %d\n", i + 1);
            break;
        }
    }
    // If element is not found
    if (i == n) {
        printf("Element not found in the array\n");
    }
    return 0;
}
