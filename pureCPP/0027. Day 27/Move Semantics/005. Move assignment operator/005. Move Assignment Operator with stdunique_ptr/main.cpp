#include <memory>
#include <iostream>

class MyClass {
public:
    std::unique_ptr<int> data;

    MyClass(int d) : data(std::make_unique<int>(d)) {}

    // Move assignment operator
    MyClass& operator=(MyClass &&other) noexcept {
        if (this != &other) {
            data = std::move(other.data);  // Use std::move for unique_ptr
            std::cout << "Move assignment with std::unique_ptr called" << std::endl;
        }
        return *this;
    }
};

int main() {
    MyClass obj1(42);
    MyClass obj2(24);
    obj2 = std::move(obj1);  // Transfers unique_ptr ownership
}
