#include <iostream>
#include <memory>

std::unique_ptr<int> createInt() {
    return std::make_unique<int>(10); // Returning unique_ptr
}

int main() {
    std::unique_ptr<int> ptr = createInt();
    std::cout << "Value: " << *ptr << std::endl; // Output: 10
    return 0;
}
