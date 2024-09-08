#include <iostream>

// Function to safely access an array element
    int safeAccess(int arr[], int index, int size) {
        if (index >= 0 && index < size) {
            return arr[index];
        } else {
            std::cerr << "Index out of bounds!" << std::endl;
            return -1;  // Error value
        }
    }

int main() {
    int numbers[4] = {10, 20, 30, 40};

    int value = safeAccess(numbers, 2, 4);  // Valid access
    int invalid = safeAccess(numbers, 5, 4);  // Out-of-bounds access

    return 0;
}