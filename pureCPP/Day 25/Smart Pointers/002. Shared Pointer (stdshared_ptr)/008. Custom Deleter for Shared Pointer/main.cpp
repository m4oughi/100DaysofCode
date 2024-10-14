#include <iostream>
#include <memory>

void customDeleter(int* ptr) {
    std::cout << "Custom deleter called. Deleting resource..." << std::endl;
    delete ptr;
}

int main() {
    std::shared_ptr<int> ptr(new int(40), customDeleter);  // Custom deleter
    std::cout << "Value: " << *ptr << std::endl;
    return 0;
}
