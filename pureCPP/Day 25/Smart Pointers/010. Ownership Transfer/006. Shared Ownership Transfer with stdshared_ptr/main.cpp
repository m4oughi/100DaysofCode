#include <iostream>
#include <memory>

int main() {
    std::shared_ptr<int> sharedPtr1 = std::make_shared<int>(1000);  // Create shared_ptr
    std::shared_ptr<int> sharedPtr2 = sharedPtr1;  // Shared ownership

    std::cout << "sharedPtr1 value: " << *sharedPtr1 << std::endl;
    std::cout << "sharedPtr2 value: " << *sharedPtr2 << std::endl;

    std::cout << "Use count: " << sharedPtr1.use_count() << std::endl;  // Shows shared ownership

    return 0;
}
