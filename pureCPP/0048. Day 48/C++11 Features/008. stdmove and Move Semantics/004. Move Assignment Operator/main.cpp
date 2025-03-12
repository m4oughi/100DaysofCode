#include <iostream>
#include <utility>

class MyClass {
public:
    int* data;

    // Constructor
    MyClass(int value) {
        data = new int(value);
        std::cout << "Constructor called\n";
    }

    // Move Assignment Operator
    MyClass& operator=(MyClass&& other) noexcept {
        if (this != &other) {
            delete data; // Free existing resource
            data = other.data;
            other.data = nullptr;
            std::cout << "Move Assignment Operator called\n";
        }
        return *this;
    }

    // Destructor
    ~MyClass() {
        delete data;
        std::cout << "Destructor called\n";
    }
};

int main() {
    MyClass obj1(20);
    MyClass obj2(30);

    obj2 = std::move(obj1); // Calls move assignment operator

    return 0;
}
