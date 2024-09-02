#include <iostream>
#include <memory>  // Include the memory header for smart pointers

int main() {
    // Using unique_ptr to manage dynamic memory automatically
    std::unique_ptr<int> ptr(new int);  // Create a unique_ptr for an integer

    *ptr = 100;
    std::cout << "Value: " << *ptr << std::endl;  // Output: Value: 100

    // No need to explicitly delete the memory; it is automatically managed by unique_ptr

    return 0;
}
