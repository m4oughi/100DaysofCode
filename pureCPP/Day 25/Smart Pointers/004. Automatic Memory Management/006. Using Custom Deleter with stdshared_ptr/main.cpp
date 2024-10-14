#include <iostream>
#include <memory>

void customDeleter(int* ptr) {
    std::cout << "Custom deleter called. Deleting resource..." << std::endl;
    delete ptr;
}

int main() {
    std::shared_ptr<int> ptr(new int(30), customDeleter);  // Shared pointer with custom deleter
    std::cout << "Value: " << *ptr << std::endl;

    // When ptr goes out of scope, customDeleter will be called
    return 0;
}
