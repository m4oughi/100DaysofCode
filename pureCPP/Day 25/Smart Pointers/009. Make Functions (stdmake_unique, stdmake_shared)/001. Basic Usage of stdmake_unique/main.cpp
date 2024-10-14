#include <iostream>
#include <memory>

int main() {
    auto uniquePtr = std::make_unique<int>(42);  // Create unique_ptr with value 42
    std::cout << "Value: " << *uniquePtr << std::endl;

    return 0;
}
