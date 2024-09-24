#include <iostream>

int safeAccess(int arr[], int size, int index) {
    if (index >= 0 && index < size) {
        return arr[index];
    } else {
        std::cerr << "Error: Index " << index << " is out of bounds!" << std::endl;
        return -1;  // Return an error value
    }
}

int main() {
    int numbers[4] = {5, 10, 15, 20};

    // Safe access
    std::cout << safeAccess(numbers, 4, 2) << std::endl;  // Outputs: 15

    // Out-of-bounds access attempt
    std::cout << safeAccess(numbers, 4, 5) << std::endl;  // Outputs an error message
}
