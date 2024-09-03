#include <iostream>

int main() {
    int size = 5;
    int* dynamicArray = new int[size];  // Dynamic allocation

    for (int i = 0; i < size; ++i) {
        dynamicArray[i] = i + 1;  // Initializing the dynamic array
    }
    return 0;
}