#include <iostream>
#include <memory>

int main() {
    std::shared_ptr<int> sharedPtr = std::make_shared<int>(400);
    std::weak_ptr<int> weakPtr = sharedPtr;  // Weak reference, no ownership

    std::cout << "Use count: " << sharedPtr.use_count() << std::endl;

    if (auto lockedPtr = weakPtr.lock()) {
        std::cout << "Weak pointer locked, value: " << *lockedPtr << std::endl;
        std::cout << "Use count after locking: " << lockedPtr.use_count() << std::endl;
    }

    return 0;
}
