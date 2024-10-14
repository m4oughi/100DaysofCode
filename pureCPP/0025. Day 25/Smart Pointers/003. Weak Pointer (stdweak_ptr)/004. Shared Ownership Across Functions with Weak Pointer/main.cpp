#include <iostream>
#include <memory>

void observeWeakPtr(std::weak_ptr<int> weakPtr) {
    if (auto shared = weakPtr.lock()) {  // Convert weak_ptr to shared_ptr if not expired
        std::cout << "Observed value: " << *shared << std::endl;
    } else {
        std::cout << "Weak pointer is expired." << std::endl;
    }
}

int main() {
    std::shared_ptr<int> sharedPtr = std::make_shared<int>(50);
    std::weak_ptr<int> weakPtr = sharedPtr;

    observeWeakPtr(weakPtr);  // Function checks weak_ptr's validity

    sharedPtr.reset();  // Resetting the shared pointer

    observeWeakPtr(weakPtr);  // Now weak_ptr should be expired

    return 0;
}
