#include <iostream>
#include <memory>

int main() {
    std::shared_ptr<int> ptr1 = std::make_shared<int>(40); // allocate memory
    std::cout << "Value: " << *ptr1 << std::endl;
    std::cout << "Use count: " << ptr1.use_count() << std::endl; // reference count is 1

    return 0;
}
