#include <iostream>
#include <memory>

// Custom deleter function
void customDeleter(int* p) {
    std::cout << "Custom deleter called!" << std::endl;
    delete p;
}

int main() {
    // Create a shared_ptr with a custom deleter
    std::shared_ptr<int> ptr(new int(300), customDeleter);
    std::cout << "Value: " << *ptr << std::endl;  // Output: Value: 300

    // When ptr goes out of scope, the custom deleter is called

    return 0;
}
