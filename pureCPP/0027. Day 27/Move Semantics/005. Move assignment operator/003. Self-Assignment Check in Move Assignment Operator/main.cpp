#include <iostream>

class MyClass {
public:
    int *data;

    MyClass(int d) : data(new int(d)) {}

    // Move assignment operator
    MyClass& operator=(MyClass &&other) noexcept {
        if (this != &other) {  // Avoid self-assignment
            delete data;
            data = other.data;
            other.data = nullptr;
            std::cout << "Move assignment operator called" << std::endl;
        }
        return *this;
    }

    ~MyClass() {
        delete data;
    }
};

int main() {
    MyClass obj1(10);
    obj1 = std::move(obj1);  // Self-assignment, won't do anything harmful
}
