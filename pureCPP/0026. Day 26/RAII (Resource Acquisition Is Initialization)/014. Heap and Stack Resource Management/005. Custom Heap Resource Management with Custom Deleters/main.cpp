#include <iostream>
#include <memory>

struct CustomDeleter {
    void operator()(int* ptr) const {
        std::cout << "Custom deleter: Releasing heap resource." << std::endl;
        delete ptr;
    }
};

int main() {
    {
        std::unique_ptr<int, CustomDeleter> ptr(new int(55));
        std::cout << "Heap resource value: " << *ptr << std::endl;
        // Custom deleter is called when `ptr` goes out of scope.
    }
    std::cout << "Custom heap resource has been released." << std::endl;
}
