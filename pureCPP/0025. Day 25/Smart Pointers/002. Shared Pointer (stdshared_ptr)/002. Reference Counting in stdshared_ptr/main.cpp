#include <iostream>
#include <memory>

int main() {
    std::shared_ptr<int> ptr1 = std::make_shared<int>(20);  // First shared_ptr
    std::shared_ptr<int> ptr2 = ptr1;                       // Second shared_ptr (shared ownership)

    std::cout << "Value: " << *ptr1 << std::endl;
    std::cout << "Reference count: " << ptr1.use_count() << std::endl;  // Check reference count

    return 0;
}
