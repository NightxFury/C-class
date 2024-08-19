#include <stdio.h>

int main() {
    int n, sum = 0;

    // Ask the user for the number of elements
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    // Input the elements from the user
    printf("Enter %d elements: ", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Calculate the sum of the elements
    for(int i = 0; i < n; i++) {
        sum += arr[i];
    }

    // Output the sum
    printf("The sum of the elements of the array is: %d\n", sum);

    return 0;
}
