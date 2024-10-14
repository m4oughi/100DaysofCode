#include <iostream>
#include <memory>

std::unique_ptr<int> createUniquePtr() {
    return std::make_unique<int>(50);
}

int main() {
    std::unique_ptr<int> ptr = createUniquePtr();  // Receiving unique_ptr from function
    std::cout << "Value: " << *ptr << std::endl;
    return 0;
}
