#include <iostream>

int* getArray() {
    static int arr[5] = {10, 20, 30, 40, 50};  // Static array, so it persists after the function returns
    return arr;  // Return a pointer to the first element
}

int main() {
    int* ptr = getArray();  // Get the pointer to the array

    // Modify the array elements using the pointer
    ptr[0] += 5;
    ptr[2] *= 2;

    // Print the modified array
    for (int i = 0; i < 5; ++i) {
        std::cout << ptr[i] << " ";  // Outputs: 15 20 60 40 50
    }
    std::cout << std::endl;
}
