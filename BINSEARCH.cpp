#include <stdio.h>

// Function to perform binary search
int binary_search(int arr[], int size, int target) {
    int low = 0;
    int high = size - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == target) {
            return mid;  // Element found, return its index
        } else if (arr[mid] < target) {
            low = mid + 1;  // Search the right half
        } else {
            high = mid - 1;  // Search the left half
        }
    }

    return -1;  // Element not found
}

int main() {
    // Declare an array (make sure it's sorted)
    int sortedArray[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    // Declare an element to search
    int target = 7;

    // Call the binary search function
    int result = binary_search(sortedArray, sizeof(sortedArray) / sizeof(sortedArray[0]), target);

    // Print the output using printf
    if (result != -1) {
        printf("Element found at index: %d\n", result);
    } else {
        printf("Element not found in the array.\n");
    }

    return 0;
}

