#include <iostream>

void printArray(const int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";  // Accesses elements without modifying them
    }
    std::cout << std::endl;
}

int main() {
    const int arr[4] = {5, 10, 15, 20};

    printArray(arr, 4);  // Outputs: 5 10 15 20

    // arr[0] = 50;  // Error: Cannot modify a const array
}
