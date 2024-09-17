#include <iostream>
#include <memory>  // For smart pointers

// Function declaration returning unique_ptr
std::unique_ptr<int> createPointer(int value);

int main() {
    std::unique_ptr<int> ptr = createPointer(10);  // Function call returning smart pointer
    std::cout << "Value: " << *ptr << std::endl;
    return 0;
}

// Function definition returning unique_ptr
std::unique_ptr<int> createPointer(int value) {
    return std::make_unique<int>(value);  // Create and return unique_ptr
}
