#include <iostream>
#include <memory>

void customDeleter(int* ptr) {
    std::cout << "Custom deleter called for pointer " << ptr << std::endl;
    delete ptr;
}

int main() {
    {
        std::unique_ptr<int, decltype(&customDeleter)> uniquePtr(new int(100), customDeleter);
        std::cout << "Unique pointer value: " << *uniquePtr << std::endl;
    }  // Custom deleter is automatically invoked when `uniquePtr` goes out of scope.
}
