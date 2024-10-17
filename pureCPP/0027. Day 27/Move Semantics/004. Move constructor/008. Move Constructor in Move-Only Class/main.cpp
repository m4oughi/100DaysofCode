#include <iostream>

class MyClass {
public:
    int *data;

    MyClass(int d) : data(new int(d)) {}

    // Move constructor
    MyClass(MyClass &&other) noexcept : data(other.data) {
        other.data = nullptr;
        std::cout << "Move constructor called" << std::endl;
    }

    // Delete copy constructor
    MyClass(const MyClass&) = delete;

    ~MyClass() {
        delete data;
    }
};

int main() {
    MyClass obj1(42);
    // MyClass obj2 = obj1;  // Error: Copy constructor is deleted
    MyClass obj2 = std::move(obj1);  // Move constructor is called
}
