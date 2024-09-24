#include <iostream>
#include <string>

int main() {
    int size = 3;
    std::string** dynamicArray = new std::string*[size];

    dynamicArray[0] = new std::string("Hello");
    dynamicArray[1] = new std::string("World");
    dynamicArray[2] = new std::string("!");

    // Access and print elements
    for (int i = 0; i < size; ++i) {
        std::cout << *dynamicArray[i] << " ";
    }
    std::cout << std::endl;

    // Clean up
    for (int i = 0; i < size; ++i) {
        delete dynamicArray[i];
    }
    delete[] dynamicArray;
}
