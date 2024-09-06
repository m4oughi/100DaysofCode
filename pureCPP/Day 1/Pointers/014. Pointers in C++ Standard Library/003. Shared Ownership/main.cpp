#include <iostream>
#include <memory>

void printValue(std::shared_ptr<int> ptr) {
    std::cout << "Value: " << *ptr << std::endl;
}

int main() {
    std::shared_ptr<int> sharedPtr = std::make_shared<int>(20);  // Create a shared_ptr to manage a dynamically allocated int
    printValue(sharedPtr);  // Output: Value: 20

    std::cout << "Reference count: " << sharedPtr.use_count() << std::endl;  // Output: Reference count: 1

    return 0;
}
