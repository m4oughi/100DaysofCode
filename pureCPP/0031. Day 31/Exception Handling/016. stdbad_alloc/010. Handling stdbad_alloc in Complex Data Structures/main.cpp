#include <iostream>
#include <new>

int main() {
    try {
        int** matrix = new int*[100000000000];  // Try allocating 2D array
        for (int i = 0; i < 100000000000; ++i) {
            matrix[i] = new int[100000000000];  // Allocate rows
        }
        std::cout << "Matrix memory allocation successful" << std::endl;
    } catch (const std::bad_alloc& e) {
        std::cout << "Memory allocation failed: " << e.what() << std::endl;
    }
    return 0;
}
