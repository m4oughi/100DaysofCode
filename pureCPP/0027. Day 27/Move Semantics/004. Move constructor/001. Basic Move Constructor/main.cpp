#include <iostream>

class MyClass {
public:
    int *data;

    MyClass(int d) : data(new int(d)) {  // Constructor
        std::cout << "Constructor called" << std::endl;
    }

    // Move constructor
    MyClass(MyClass &&other) noexcept : data(other.data) {
        other.data = nullptr;  // Transfer ownership
        std::cout << "Move constructor called" << std::endl;
    }

    ~MyClass() {  // Destructor
        delete data;
        std::cout << "Destructor called" << std::endl;
    }
};

int main() {
    MyClass obj1(10);
    MyClass obj2(std::move(obj1));  // Calls move constructor
}
