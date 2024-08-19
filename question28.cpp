#include <stdio.h>

int main() {
    int n, max;

    // Ask the user for the number of elements
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    // Input the elements from the user
    printf("Enter %d elements: ", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Initialize the maximum with the first element of the array
    max = arr[0];

    // Loop to find the largest element
    for(int i = 1; i < n; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
    }

    // Output the largest element
    printf("The largest number in the array is: %d\n", max);

    return 0;
}

