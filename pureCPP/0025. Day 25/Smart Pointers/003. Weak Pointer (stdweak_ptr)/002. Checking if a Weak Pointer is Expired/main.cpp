#include <iostream>
#include <memory>

int main() {
    std::shared_ptr<int> sharedPtr = std::make_shared<int>(20);
    std::weak_ptr<int> weakPtr = sharedPtr;

    if (std::shared_ptr<int> tempPtr = weakPtr.lock()) { // Check if weak pointer is valid
        std::cout << "Weak pointer is valid. Value: " << *tempPtr << std::endl;
    } else {
        std::cout << "Weak pointer is expired." << std::endl;
    }

    sharedPtr.reset();  // Resetting shared pointer

    if (std::shared_ptr<int> tempPtr = weakPtr.lock()) {
        std::cout << "Weak pointer is still valid." << std::endl;
    } else {
        std::cout << "Weak pointer is expired after shared_ptr reset." << std::endl;
    }

    return 0;
}
