#include <iostream>
#include <memory>

void takeOwnership(std::unique_ptr<int> ptr) {
    std::cout << "Function owns value: " << *ptr << std::endl;
}

int main() {
    std::unique_ptr<int> uniquePtr = std::make_unique<int>(100);  // Create unique_ptr
    takeOwnership(std::move(uniquePtr));  // Transfer ownership to the function

    if (!uniquePtr) {
        std::cout << "uniquePtr is null after transfer" << std::endl;
    }

    return 0;
}
