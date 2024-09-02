#include <iostream>
#include <memory>  // Include the memory header for smart pointers

int main() {
    // Create a shared_ptr for an integer
    std::shared_ptr<int> ptr1(new int(42));
    std::cout << "Value: " << *ptr1 << std::endl;  // Output: Value: 42

    {
        // Create another shared_ptr that shares ownership with ptr1
        std::shared_ptr<int> ptr2 = ptr1;
        std::cout << "Value from ptr2: " << *ptr2 << std::endl;  // Output: Value from ptr2: 42

        // ptr2 goes out of scope here, but the memory is not deleted because ptr1 still holds it
    }

    // ptr1 is still valid here
    std::cout << "Value from ptr1: " << *ptr1 << std::endl;  // Output: Value from ptr1: 42

    // Memory will be deallocated automatically when the last shared_ptr (ptr1) goes out of scope

    return 0;
}
