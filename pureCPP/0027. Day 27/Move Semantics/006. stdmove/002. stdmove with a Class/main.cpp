#include <iostream>
#include <utility>

class MyClass {
public:
    int* data;

    MyClass(int val) : data(new int(val)) {}

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
    MyClass obj2(std::move(obj1));  // Move constructor is called
}
