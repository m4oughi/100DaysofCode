#include <iostream>

int main() {
    int size = 5;
    int* arr = new int[size];  // Dynamically allocate array

    // Initialize the dynamic array
    for (int i = 0; i < size; ++i) {
        arr[i] = i + 1;
    }

    // Access and modify elements via pointer
    for (int i = 0; i < size; ++i) {
        std::cout << "Element " << i << ": " << arr[i] << std::endl;
    }

    delete[] arr;  // Deallocate memory
    return 0;
}
