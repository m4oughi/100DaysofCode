#include <iostream>

int* createArray(int size) {
    int* arr = new int[size];
    for (int i = 0; i < size; ++i) {
        arr[i] = i * 10;
    }
    return arr;
}

int main() {
    int* myArray = createArray(5);

    for (int i = 0; i < 5; ++i) {
        std::cout << myArray[i] << " ";
    }
    std::cout << std::endl;

    delete[] myArray;  // Clean up
    return 0;
}
