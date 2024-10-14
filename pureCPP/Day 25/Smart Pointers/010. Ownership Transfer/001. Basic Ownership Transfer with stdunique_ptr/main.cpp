#include <iostream>
#include <memory>

int main() {
    std::unique_ptr<int> uniquePtr1 = std::make_unique<int>(42);  // Create unique_ptr
    std::cout << "uniquePtr1 owns: " << *uniquePtr1 << std::endl;

    std::unique_ptr<int> uniquePtr2 = std::move(uniquePtr1);  // Transfer ownership
    if (!uniquePtr1) {
        std::cout << "uniquePtr1 is now null" << std::endl;
    }
    std::cout << "uniquePtr2 owns: " << *uniquePtr2 << std::endl;

    return 0;
}
