#include <iostream>
#include <memory>

int main() {
    std::unique_ptr<int> ptr1 = std::make_unique<int>(20);
    std::unique_ptr<int> ptr2 = std::move(ptr1); // Transfer ownership to ptr2

    if (!ptr1) {
        std::cout << "ptr1 is null after moving ownership!" << std::endl;
    }
    std::cout << "Value in ptr2: " << *ptr2 << std::endl;

    return 0;
}
