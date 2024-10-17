#include <iostream>

class MyClass {
public:
    int *data;

    MyClass(int d) : data(new int(d)) {}

    // Copy constructor
    MyClass(const MyClass &other) : data(new int(*other.data)) {
        std::cout << "Copy constructor called" << std::endl;
    }

    // Move constructor
    MyClass(MyClass &&other) noexcept : data(other.data) {
        other.data = nullptr;
        std::cout << "Move constructor called" << std::endl;
    }

    ~MyClass() {
        delete data;
    }
};

int main() {
    MyClass obj1(100);
    MyClass obj2 = obj1;  // Calls copy constructor
    MyClass obj3 = std::move(obj1);  // Calls move constructor
}
