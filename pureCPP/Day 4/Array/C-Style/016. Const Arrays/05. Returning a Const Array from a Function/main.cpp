#include <iostream>

const int* getConstArray() {
    static const int arr[3] = {100, 200, 300};  // Const array
    return arr;  // Return pointer to the const array
}

int main() {
    const int* array = getConstArray();  // Get the const array from the function

    // Access and print elements
    for (int i = 0; i < 3; ++i) {
        std::cout << array[i] << " ";  // Outputs: 100 200 300
    }
    std::cout << std::endl;

    // array[0] = 400;  // Error: Cannot modify a const array
}
