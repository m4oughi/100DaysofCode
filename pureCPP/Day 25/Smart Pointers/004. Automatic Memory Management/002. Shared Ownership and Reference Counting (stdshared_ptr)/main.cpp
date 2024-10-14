#include <iostream>
#include <memory>

int main() {
    std::shared_ptr<int> ptr1 = std::make_shared<int>(20);  // Shared pointer
    std::shared_ptr<int> ptr2 = ptr1;  // Shared ownership

    std::cout << "Value: " << *ptr1 << std::endl;
    std::cout << "Reference count: " << ptr1.use_count() << std::endl;  // Reference count is 2

    // Both ptr1 and ptr2 will go out of scope, and memory is deallocated automatically
    return 0;
}
