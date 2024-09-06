#include <iostream>
#include <memory>

int main() {
    std::unique_ptr<int> ptr = std::make_unique<int>(10);  // Create a unique_ptr to manage a dynamically allocated int
    std::cout << "Value: " << *ptr << std::endl;  // Output: Value: 10

    // Unique pointer automatically deletes the managed object when it goes out of scope
    return 0;
}
