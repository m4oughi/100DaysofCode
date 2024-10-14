#include <iostream>
#include <memory>

void useResource(std::shared_ptr<int> sharedPtr) {
    std::cout << "Using resource value: " << *sharedPtr << std::endl;
}

int main() {
    std::shared_ptr<int> ptr = std::make_shared<int>(100);
    useResource(ptr);
    std::cout << "Shared resource use count: " << ptr.use_count() << std::endl;
    // Resource is automatically released when all shared_ptrs are out of scope.
    std::cout << "Shared pointer going out of scope." << std::endl;
}
