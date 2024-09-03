#include <iostream>
#include <chrono>

int main() {
    int oldSize = 5;
    int* dynamicArray = new int[oldSize] {1, 2, 3, 4, 5};

    // Resize the array to a new size
    int newSize = 7;
    int* resizedArray = new int[newSize];

    // Copy old elements to the new array
    for (int i = 0; i < oldSize; ++i) {
        resizedArray[i] = dynamicArray[i];
    }

    // Initialize new elements
    for (int i = oldSize; i < newSize; ++i) {
        resizedArray[i] = i + 1;
    }

    // Clean up old array
    delete[] dynamicArray;
    dynamicArray = resizedArray;

    return 0;
}
