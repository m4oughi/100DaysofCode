#include <iostream>
#include <memory>

int main() {
    // Custom deleter for unique_ptr to handle arrays
    std::unique_ptr<int[], void(*)(int*)> arrayPtr(new int[5], [](int* p) {
        std::cout << "Custom deleter for array" << std::endl;
        delete[] p;
    });

    for (int i = 0; i < 5; ++i) {
        arrayPtr[i] = i * 10;  // Initialize array
        std::cout << arrayPtr[i] << " ";  // Output: 0 10 20 30 40
    }
    std::cout << std::endl;

    // Array is automatically deleted with custom deleter when unique_ptr goes out of scope
    return 0;
}
