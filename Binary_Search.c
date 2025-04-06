#include <stdio.h>

// Function for Binary Search
int binarySearch(int arr[], int size, int target) {
    int left = 0;
    int right = size - 1;
    
    while (left <= right) {
        int mid = left + (right - left) / 2;

        // Check if target is present at mid
        if (arr[mid] == target) {
            return mid;  // Target found at index mid
        }

        // If target is greater, ignore the left half
        if (arr[mid] < target) {
            left = mid + 1;
        }
        // If target is smaller, ignore the right half
        else {
            right = mid - 1;
        }
    }

    return -1;  // Target is not present in the array
}

int main() {
    int arr[] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};  // Sorted array
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 10;  // Element to be searched
    
    int result = binarySearch(arr, size, target);

    if (result != -1) {
        printf("Element found at index %d\n", result);
    } else {
        printf("Element not found in the array\n");
    }

    return 0;
}




// Using  recursion



#include <stdio.h>

// Recursive Function for Binary Search
int binarySearchRecursive(int arr[], int left, int right, int target) {
    // Base case: If the element is not present
    if (left > right) {
        return -1;
    }

    int mid = left + (right - left) / 2;

    // If target is present at mid
    if (arr[mid] == target) {
        return mid;
    }

    // If target is smaller than mid, search the left half
    if (arr[mid] > target) {
        return binarySearchRecursive(arr, left, mid - 1, target);
    }
    // If target is larger than mid, search the right half
    else {
        return binarySearchRecursive(arr, mid + 1, right, target);
    }
}

int main() {
    int arr[] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};  // Sorted array
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 10;  // Element to be searched
    
    int result = binarySearchRecursive(arr, 0, size - 1, target);

    if (result != -1) {
        printf("Element found at index %d\n", result);
    } else {
        printf("Element not found in the array\n");
    }

    return 0;
}
