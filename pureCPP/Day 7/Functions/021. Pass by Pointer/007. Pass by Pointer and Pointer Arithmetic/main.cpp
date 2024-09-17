#include <iostream>

void printArray(int* arr, int size) {
    for (int i = 0; i < size; ++i) {
        std::cout << *(arr + i) << " ";  // Pointer arithmetic
    }
    std::cout << std::endl;
}

int main() {
    int numbers[] = {1, 2, 3, 4, 5};
    printArray(numbers, 5);
    return 0;
}
