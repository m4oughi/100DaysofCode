#include <iostream>
#include <memory>

void customDeleter(int* ptr) {
    std::cout << "Custom deleter called for shared pointer " << ptr << std::endl;
    delete ptr;
}

int main() {
    {
        std::shared_ptr<int> sharedPtr(new int(200), customDeleter);
        std::cout << "Shared pointer value: " << *sharedPtr << std::endl;
    }  // Custom deleter is automatically called when `sharedPtr` goes out of scope.
}
