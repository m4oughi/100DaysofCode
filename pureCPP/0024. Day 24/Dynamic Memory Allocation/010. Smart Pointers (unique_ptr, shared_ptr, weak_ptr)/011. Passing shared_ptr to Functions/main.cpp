#include <iostream>
#include <memory>

void displayValue(std::shared_ptr<int> ptr) {
    std::cout << "Value inside function: " << *ptr << std::endl;
    std::cout << "Use count inside function: " << ptr.use_count() << std::endl;
}

int main() {
    std::shared_ptr<int> ptr = std::make_shared<int>(80);
    displayValue(ptr); // shared_ptr is passed by value

    std::cout << "Use count after function call: " << ptr.use_count() << std::endl; // still valid, use count is 1
    return 0;
}
