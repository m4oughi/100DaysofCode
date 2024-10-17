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

    // Move assignment operator
    MyClass& operator=(MyClass &&other) noexcept {
        if (this != &other) {
            delete data;
            data = other.data;
            other.data = nullptr;
            std::cout << "Move assignment called" << std::endl;
        }
        return *this;
    }

    ~MyClass() {
        delete data;
    }
};

int main() {
    MyClass obj1(100);
    MyClass obj2(200);

    obj2 = std::move(obj1);  // Move assignment operator is called
}
