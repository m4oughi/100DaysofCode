#include <iostream>
#include <memory>

int main() {
    std::shared_ptr<int> ptr1 = std::make_shared<int>(30);  // Shared pointer
    {
        std::shared_ptr<int> ptr2 = ptr1;  // Shared ownership
        std::cout << "Value in block: " << *ptr2 << std::endl;
    }  // ptr2 goes out of scope, but memory is not freed because ptr1 still holds it

    std::cout << "Value outside block: " << *ptr1 << std::endl;
    // Memory is deallocated when ptr1 goes out of scope
    return 0;
}
