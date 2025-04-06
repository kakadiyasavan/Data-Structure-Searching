#include <stdio.h>

// Function to perform linear search
int linearSearch(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i;  // Return the index if the element is found
        }
    }
    return -1;  // Return -1 if the element is not found
}

int main() {
    int arr[] = {5, 8, 12, 15, 20, 25};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 15;
    
    int result = linearSearch(arr, size, target);
    
    if (result != -1) {
        printf("Element %d found at index %d.\n", target, result);
    } else {
        printf("Element %d not found in the array.\n", target);
    }
    
    return 0;
}



// Linear Search in C using recursion

#include <stdio.h>

// Recursive function to perform linear search
int linearSearchRecursive(int arr[], int size, int target, int index) {
    // Base case: if index is out of bounds, the element is not found
    if (index == size) {
        return -1;  // Element not found
    }
    
    // If the current element matches the target, return the index
    if (arr[index] == target) {
        return index;
    }
    
    // Recurse by checking the next element
    return linearSearchRecursive(arr, size, target, index + 1);
}

int main() {
    int arr[] = {5, 8, 12, 15, 20, 25};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 15;
    
    int result = linearSearchRecursive(arr, size, target, 0); // Start recursion from index 0
    
    if (result != -1) {
        printf("Element %d found at index %d.\n", target, result);
    } else {
        printf("Element %d not found in the array.\n", target);
    }
    
    return 0;
}
