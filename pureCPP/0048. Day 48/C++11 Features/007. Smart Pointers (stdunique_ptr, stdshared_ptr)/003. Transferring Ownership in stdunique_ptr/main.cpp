#include <iostream>
#include <memory>

int main() {
    std::unique_ptr<int> ptr1 = std::make_unique<int>(100);
    std::unique_ptr<int> ptr2 = std::move(ptr1); // Ownership transfer

    if (!ptr1) {
        std::cout << "ptr1 is now empty." << std::endl;
    }
    std::cout << "ptr2 Value: " << *ptr2 << std::endl;

    return 0;
}
