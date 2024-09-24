#include <iostream>

// Large inline function (not recommended)
inline void printArray(int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    int array1[1000];
    for (int i = 0; i < 1000; ++i) array1[i] = i;

    printArray(array1, 1000); // Large function call, may cause code bloat if inlined
    return 0;
}
