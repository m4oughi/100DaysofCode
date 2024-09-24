#include <iostream>

void resizeArray(int** arr, int oldSize, int newSize) {
    int* newArr = new int[newSize];
    for (int i = 0; i < oldSize && i < newSize; ++i) {
        newArr[i] = (*arr)[i];
    }
    delete[] *arr;
    *arr = newArr;
}

int main() {
    int size = 3;
    int* myArray = new int[size]{1, 2, 3};

    resizeArray(&myArray, size, 5);  // Resize to a larger array

    for (int i = 0; i < 5; ++i) {
        std::cout << myArray[i] << " ";  // New array contents
    }
    std::cout << std::endl;

    delete[] myArray;  // Clean up
    return 0;
}
