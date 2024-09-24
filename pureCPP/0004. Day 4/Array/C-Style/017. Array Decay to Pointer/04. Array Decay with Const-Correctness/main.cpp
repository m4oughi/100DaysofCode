#include <iostream>

void printConstArray(const int* arr, int size) {  // Pointer to const int
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";  // Cannot modify elements
    }
    std::cout << std::endl;
}

int main() {
    const int arr[3] = {100, 200, 300};

    printConstArray(arr, 3);  // Array decays to a pointer to const int
    // Outputs: 100 200 300
}
