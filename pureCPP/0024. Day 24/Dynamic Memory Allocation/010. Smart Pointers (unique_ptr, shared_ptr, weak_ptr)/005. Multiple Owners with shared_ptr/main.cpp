#include <iostream>
#include <memory>

int main() {
    std::shared_ptr<int> ptr1 = std::make_shared<int>(50); // allocate memory
    std::shared_ptr<int> ptr2 = ptr1; // ptr2 shares ownership with ptr1

    std::cout << "Value: " << *ptr2 << std::endl;
    std::cout << "Use count: " << ptr1.use_count() << std::endl; // reference count is 2

    return 0;
}
