#include <iostream>

// Recursive binary search function
int binarySearch(int arr[], int low, int high, int target) {
    if (low > high)
        return -1;  // Base case: target not found

    int mid = low + (high - low) / 2;

    if (arr[mid] == target)
        return mid;  // Base case: target found
    else if (arr[mid] > target)
        return binarySearch(arr, low, mid - 1, target);  // Recursive case: search left
    else
        return binarySearch(arr, mid + 1, high, target);  // Recursive case: search right
}

int main() {
    int arr[] = {2, 4, 6, 8, 10, 12, 14};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 10;
    int result = binarySearch(arr, 0, size - 1, target);

    if (result != -1)
        std::cout << "Element found at index " << result << std::endl;
    else
        std::cout << "Element not found\n";
    return 0;
}
