#include <iostream>

int main() {
    int* ptrArray[3];

    // Allocate memory for each pointer and assign values
    for (int i = 0; i < 3; ++i) {
        ptrArray[i] = new int(i * 10);  // Dynamically allocate memory
    }

    // Print values using the array of pointers
    for (int i = 0; i < 3; ++i) {
        std::cout << *ptrArray[i] << " ";  // Outputs: 0 10 20
    }
    std::cout << std::endl;

    // Free the allocated memory
    for (int i = 0; i < 3; ++i) {
        delete ptrArray[i];
    }
}
