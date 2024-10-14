#include <iostream>
#include <memory>

void customDeleter(int* ptr) {
    std::cout << "Custom deleter called. Deleting resource..." << std::endl;
    delete ptr;
}

int main() {
    std::unique_ptr<int, decltype(&customDeleter)> ptr(new int(30), customDeleter);
    std::cout << "Value: " << *ptr << std::endl;
    return 0;
}
