#include <iostream>
#include <memory>  // Include the memory header for smart pointers

int main() {
    // Create a unique_ptr to manage a dynamically allocated integer
    std::unique_ptr<int> ptr(new int(42));

    // Access the value stored in the unique_ptr
    std::cout << "Value: " << *ptr << std::endl;  // Output: Value: 42

    // No need to explicitly delete the memory; it is automatically managed by unique_ptr

    return 0;
}
