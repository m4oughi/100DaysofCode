#include <iostream>

class MyClass {
public:
    int *data;

    MyClass(int d) : data(new int(d)) {}

    // Move assignment operator
    MyClass& operator=(MyClass &&other) noexcept {
        if (this != &other) {
            delete data;               // Free old resource
            data = other.data;         // Steal resource
            other.data = nullptr;      // Leave other in valid state
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
    MyClass obj2(20);
    obj2 = std::move(obj1);  // Calls move assignment operator
}