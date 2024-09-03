#include <iostream>

void modifyArray(int* arr, int size) {
    for (int i = 0; i < size; ++i) {
        arr[i] *= 2;  // Modify elements via pointer
    }
}

int main() {
    int arr[4] = {1, 2, 3, 4};

    modifyArray(arr, 4);  // Array decays to a pointer

    // Print modified array
    for (int i = 0; i < 4; ++i) {
        std::cout << arr[i] << " ";  // Outputs: 2 4 6 8
    }
    std::cout << std::endl;
}
