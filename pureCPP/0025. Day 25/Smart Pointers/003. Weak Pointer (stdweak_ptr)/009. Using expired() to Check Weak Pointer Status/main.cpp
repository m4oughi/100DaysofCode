#include <iostream>
#include <memory>

int main() {
    std::shared_ptr<int> sharedPtr = std::make_shared<int>(90);
    std::weak_ptr<int> weakPtr = sharedPtr;

    if (weakPtr.expired()) {
        std::cout << "Weak pointer is expired." << std::endl;
    } else {
        std::cout << "Weak pointer is valid. Value: " << *weakPtr.lock() << std::endl;
    }

    sharedPtr.reset();  // Reset the shared pointer

    if (weakPtr.expired()) {
        std::cout << "Weak pointer is expired after shared_ptr reset." << std::endl;
    }

    return 0;
}
