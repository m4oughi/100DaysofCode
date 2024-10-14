#include <iostream>
#include <memory>

void customDeleter(int* ptr) {
    std::cout << "Custom deleter called. Deleting memory..." << std::endl;
    delete ptr;
}

int main() {
    std::shared_ptr<int> ptr(new int(10), customDeleter);  // Custom deleter for memory cleanup
    std::cout << "Value: " << *ptr << std::endl;

    // Memory will be deallocated using custom deleter when ptr goes out of scope
    return 0;
}
