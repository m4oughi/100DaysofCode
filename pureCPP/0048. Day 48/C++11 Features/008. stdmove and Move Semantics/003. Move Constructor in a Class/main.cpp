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

    // Move Constructor
    MyClass(MyClass&& other) noexcept : data(other.data) {
        other.data = nullptr;
        std::cout << "Move Constructor called\n";
    }

    // Destructor
    ~MyClass() {
        delete data;
        std::cout << "Destructor called\n";
    }
};

int main() {
    MyClass obj1(10);
    MyClass obj2(std::move(obj1)); // Calls move constructor

    return 0;
}
