#include <iostream>
#include <memory>

int main() {
    std::shared_ptr<int> ptr1 = std::make_shared<int>(50);
    std::shared_ptr<int> ptr2 = ptr1; // Shared ownership

    std::cout << "ptr1 Value: " << *ptr1 << std::endl;
    std::cout << "ptr2 Value: " << *ptr2 << std::endl;
    std::cout << "Reference Count: " << ptr1.use_count() << std::endl;

    return 0;
}
