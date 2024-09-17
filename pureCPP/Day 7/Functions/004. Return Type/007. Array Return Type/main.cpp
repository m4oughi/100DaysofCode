#include <iostream>

// Function declaration returning array
int* generateArray();

int main() {
    int* arr = generateArray();  // Function call, returns array
    for (int i = 0; i < 5; ++i) {
        std::cout << arr[i] << " ";  // Accessing returned array elements
    }
    std::cout << std::endl;
    return 0;
}

// Function definition returning array
int* generateArray() {
    static int arr[5] = {1, 2, 3, 4, 5};  // Static array to persist in memory
    return arr;  // Return pointer to the array
}
