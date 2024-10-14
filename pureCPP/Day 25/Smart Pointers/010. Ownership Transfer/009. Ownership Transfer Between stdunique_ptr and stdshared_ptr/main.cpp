#include <iostream>
#include <memory>

std::shared_ptr<int> convertUniqueToShared(std::unique_ptr<int> uniquePtr) {
    return std::shared_ptr<int>(std::move(uniquePtr));  // Transfer ownership to shared_ptr
}

int main() {
    std::unique_ptr<int> uniquePtr = std::make_unique<int>(500);  // Create unique_ptr
    std::shared_ptr<int> sharedPtr = convertUniqueToShared(std::move(uniquePtr));  // Transfer ownership

    std::cout << "sharedPtr owns: " << *sharedPtr << std::endl;

    if (!uniquePtr) {
        std::cout << "uniquePtr is null after transfer" << std::endl;
    }

    return 0;
}
