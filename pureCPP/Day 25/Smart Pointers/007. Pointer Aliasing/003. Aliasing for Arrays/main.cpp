#include <iostream>
#include <memory>

int main() {
    // Dynamically allocate an array of 5 integers
    std::shared_ptr<int[]> arrayPtr(new int[5]);

    for (int i = 0; i < 5; ++i) {
        arrayPtr[i] = i * 10;
    }

    // Create an alias to the 3rd element of the array
    std::shared_ptr<int> aliasPtr(arrayPtr, &arrayPtr[2]);

    std::cout << "Third element via alias: " << *aliasPtr << std::endl;
    std::cout << "Third element via original array: " << arrayPtr[2] << std::endl;

    return 0;
}
