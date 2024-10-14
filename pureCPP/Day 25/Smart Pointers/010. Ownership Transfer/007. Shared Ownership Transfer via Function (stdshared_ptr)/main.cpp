#include <iostream>
#include <memory>

void shareOwnership(std::shared_ptr<int> ptr) {
    std::cout << "Shared ownership in function: " << *ptr << std::endl;
    std::cout << "Use count in function: " << ptr.use_count() << std::endl;
}

int main() {
    std::shared_ptr<int> sharedPtr = std::make_shared<int>(300);
    std::cout << "Use count before function: " << sharedPtr.use_count() << std::endl;

    shareOwnership(sharedPtr);  // Share ownership with function

    std::cout << "Use count after function: " << sharedPtr.use_count() << std::endl;

    return 0;
}
