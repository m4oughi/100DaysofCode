#include <iostream>
#include <memory>

int main() {
    std::shared_ptr<int> sharedPtr = std::make_shared<int>(10); // Shared pointer
    std::weak_ptr<int> weakPtr = sharedPtr;                     // Weak pointer

    std::cout << "Shared value: " << *sharedPtr << std::endl;
    std::cout << "Weak pointer doesn't increase the reference count." << std::endl;
    std::cout << "Shared pointer count: " << sharedPtr.use_count() << std::endl;

    return 0;
}
