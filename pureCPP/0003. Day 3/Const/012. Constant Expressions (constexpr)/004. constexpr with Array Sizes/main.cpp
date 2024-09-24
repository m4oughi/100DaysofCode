#include <iostream>

constexpr int arraySize(int n) {
    return n * 2;
}

int main() {
    int arr[arraySize(5)]; // Array size determined at compile-time
    std::cout << sizeof(arr) / sizeof(arr[0]) << std::endl; // Prints 10
}
