#include <iostream>
#include <memory>

struct CustomDeleter {
    void operator()(int* ptr) const {
        std::cout << "Custom deleting memory" << std::endl;
        delete ptr;
    }
};

void customDeleterExample() {
    std::unique_ptr<int, CustomDeleter> ptr(new int(55), CustomDeleter());
    std::cout << "Value: " << *ptr << std::endl;
    // Custom deleter will be called when ptr goes out of scope
}

int main() {
    customDeleterExample();
    std::cout << "Memory automatically deallocated with custom deleter using RAII." << std::endl;
    return 0;
}
