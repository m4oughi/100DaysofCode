#include <iostream>

void printStaticArray() {
    static const int arr[] = {7, 8, 9}; // Static constant array
    for (int i : arr) {
        std::cout << i << " "; // Prints 7 8 9
    }
    std::cout << std::endl;
}

int main() {
    printStaticArray();
}
