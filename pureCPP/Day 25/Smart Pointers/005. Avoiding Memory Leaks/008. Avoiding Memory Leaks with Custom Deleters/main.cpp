#include <iostream>
#include <memory>

void customDeleter(int* ptr) {
    std::cout << "Custom deleter called, freeing memory..." << std::endl;
    delete ptr;
}

int main() {
    std::shared_ptr<int> ptr(new int(70), customDeleter);  // Custom deleter manages memory
    std::cout << "Value: " << *ptr << std::endl;

    // Memory will be automatically freed using custom deleter when ptr goes out of scope
    return 0;
}
