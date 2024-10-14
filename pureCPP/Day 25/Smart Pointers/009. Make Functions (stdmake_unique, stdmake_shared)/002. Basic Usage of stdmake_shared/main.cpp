#include <iostream>
#include <memory>

int main() {
    auto sharedPtr = std::make_shared<int>(99);  // Create shared_ptr with value 99
    std::cout << "Value: " << *sharedPtr << std::endl;

    return 0;
}
