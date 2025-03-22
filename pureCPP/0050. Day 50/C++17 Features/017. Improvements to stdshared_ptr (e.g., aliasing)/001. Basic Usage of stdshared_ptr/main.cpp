#include <iostream>
#include <memory>

int main() {
    std::shared_ptr<int> ptr1 = std::make_shared<int>(42);
    std::shared_ptr<int> ptr2 = ptr1; // Shared ownership

    std::cout << "Value: " << *ptr1 << ", Use count: " << ptr1.use_count() << '\n';
    return 0;
}
