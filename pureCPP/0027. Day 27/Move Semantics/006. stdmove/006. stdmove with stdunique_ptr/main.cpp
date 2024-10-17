#include <iostream>
#include <memory>
#include <utility>

int main() {
    std::unique_ptr<int> ptr1 = std::make_unique<int>(100);
    std::unique_ptr<int> ptr2 = std::move(ptr1);  // Ownership of ptr1 is transferred to ptr2

    if (!ptr1) {
        std::cout << "ptr1 is empty after move" << std::endl;
    }
    std::cout << "ptr2 value: " << *ptr2 << std::endl;
}
