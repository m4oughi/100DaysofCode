#include <iostream>
#include <memory>

int main() {
    {
        std::unique_ptr<int> ptr = std::make_unique<int>(42);
        std::cout << "Value: " << *ptr << std::endl;
    }  // Memory is automatically freed when `ptr` goes out of scope.
    std::cout << "Memory freed automatically." << std::endl;
}
