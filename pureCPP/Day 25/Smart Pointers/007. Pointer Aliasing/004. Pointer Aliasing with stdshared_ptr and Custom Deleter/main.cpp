#include <iostream>
#include <memory>

void customDeleter(int* ptr) {
    std::cout << "Custom deleter called. Deleting array..." << std::endl;
    delete[] ptr;
}

int main() {
    // Allocate a dynamic array with a custom deleter
    std::shared_ptr<int> arrayPtr(new int[5], customDeleter);

    for (int i = 0; i < 5; ++i) {
        arrayPtr.get()[i] = i * 10;
    }

    // Create an alias to the 4th element of the array
    std::shared_ptr<int> aliasPtr(arrayPtr, &arrayPtr.get()[3]);

    std::cout << "Fourth element via alias: " << *aliasPtr << std::endl;
    std::cout << "Fourth element via original array: " << arrayPtr.get()[3] << std::endl;

    return 0;
}
