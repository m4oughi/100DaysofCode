#include <iostream>
#include <memory>

void customDeleter(int* ptr) {
    std::cout << "Custom deleter called" << std::endl;
    delete ptr;
}

int main() {
    std::unique_ptr<int, decltype(&customDeleter)> ptr(new int(100), customDeleter);
    std::cout << "Value: " << *ptr << std::endl;

    // Custom deleter will be called automatically when ptr goes out of scope
    return 0;
}
