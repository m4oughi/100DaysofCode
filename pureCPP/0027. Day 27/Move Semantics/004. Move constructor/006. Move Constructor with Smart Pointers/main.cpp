#include <memory>
#include <iostream>

class MyClass {
public:
    std::unique_ptr<int> data;

    MyClass(int d) : data(std::make_unique<int>(d)) {}

    // Move constructor
    MyClass(MyClass &&other) noexcept : data(std::move(other.data)) {
        std::cout << "Move constructor called" << std::endl;
    }
};

int main() {
    MyClass obj1(42);
    MyClass obj2(std::move(obj1));  // Move constructor transfers unique_ptr
}
