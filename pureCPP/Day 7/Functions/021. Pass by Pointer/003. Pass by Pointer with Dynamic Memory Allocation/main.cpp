#include <iostream>

void allocateArray(int** arr, int size) {
    *arr = new int[size];
    for (int i = 0; i < size; ++i) {
        (*arr)[i] = i;
    }
}

int main() {
    int* array = nullptr;
    allocateArray(&array, 5);
    
    for (int i = 0; i < 5; ++i) {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;

    delete[] array;  // Clean up
    return 0;
}
