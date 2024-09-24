#include <iostream>

int* getStaticArray() {
    static int arr[5] = {1, 2, 3, 4, 5};  // Static array
    return arr;  // Return a pointer to the first element
}

int main() {
    int* array = getStaticArray();  // Get the pointer to the array

    // Print the array elements
    for (int i = 0; i < 5; ++i) {
        std::cout << array[i] << " ";  // Outputs: 1 2 3 4 5
    }
    std::cout << std::endl;
}
