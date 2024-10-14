#include <iostream>
#include <memory>

void useSharedPtr(std::shared_ptr<int> ptr) {
    std::cout << "Inside function, value: " << *ptr << std::endl;
    std::cout << "Reference count inside function: " << ptr.use_count() << std::endl;
}

int main() {
    std::shared_ptr<int> ptr = std::make_shared<int>(30);
    useSharedPtr(ptr);  // Passing shared_ptr by value increases reference count

    std::cout << "Reference count in main: " << ptr.use_count() << std::endl;
    return 0;
}
