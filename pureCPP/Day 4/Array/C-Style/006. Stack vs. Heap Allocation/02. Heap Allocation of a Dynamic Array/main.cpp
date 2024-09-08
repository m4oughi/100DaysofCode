#include <iostream>

void function() {
    int size = 5;
    int* heapArray = new int[size];  // Heap allocation

    for (int i = 0; i < size; ++i) {
        heapArray[i] = i + 1;  // Initialize the array
    }

    delete[] heapArray;  // Manual deallocation required
}

int main() {
    

    return 0;
}