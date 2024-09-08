#include <iostream>

void printArray(int* arr, int size) {  // Function accepts a pointer
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";  // Access elements via pointer
    }
    std::cout << std::endl;
}

int main() {
    int arr[5] = {1, 2, 3, 4, 5};

    printArray(arr, 5);  // Array decays to a pointer when passed to the function
    // Outputs: 1 2 3 4 5
}
