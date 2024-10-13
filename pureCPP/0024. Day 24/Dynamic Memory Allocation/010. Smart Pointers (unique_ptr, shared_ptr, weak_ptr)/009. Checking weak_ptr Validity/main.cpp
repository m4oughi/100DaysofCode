#include <iostream>
#include <memory>

int main() {
    std::shared_ptr<int> ptr1 = std::make_shared<int>(70);
    std::weak_ptr<int> weakPtr = ptr1; // weak pointer observing ptr1

    if (auto lockedPtr = weakPtr.lock()) { // check if weak_ptr can lock
        std::cout << "Weak pointer is valid, value: " << *lockedPtr << std::endl;
    }

    ptr1.reset(); // reset ptr1, weakPtr is now dangling
    if (auto lockedPtr = weakPtr.lock()) {
        std::cout << "Weak pointer still valid" << std::endl;
    } else {
        std::cout << "Weak pointer is invalid (dangling)" << std::endl;
    }

    return 0;
}
