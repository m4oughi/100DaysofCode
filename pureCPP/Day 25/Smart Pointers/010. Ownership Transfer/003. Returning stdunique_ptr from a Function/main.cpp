#include <iostream>
#include <memory>

std::unique_ptr<int> createResource() {
    return std::make_unique<int>(200);  // Return a unique_ptr from function
}

int main() {
    std::unique_ptr<int> resource = createResource();  // Transfer ownership from function
    std::cout << "Main owns value: " << *resource << std::endl;

    return 0;
}
