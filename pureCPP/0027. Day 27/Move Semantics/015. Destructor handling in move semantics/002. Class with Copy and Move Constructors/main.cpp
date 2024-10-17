#include <iostream>

class MyClass {
    int* data;
public:
    MyClass() : data(new int(10)) {
        std::cout << "Constructor: Allocating resource.\n";
    }

    // Copy constructor
    MyClass(const MyClass& other) : data(new int(*other.data)) {
        std::cout << "Copy constructor: Resource copied.\n";
    }

    // Move constructor
    MyClass(MyClass&& other) noexcept : data(other.data) {
        other.data = nullptr;
        std::cout << "Move constructor: Resource moved.\n";
    }

    ~MyClass() {
        delete data;
        std::cout << "Destructor: Releasing resource.\n";
    }
};

int main() {
    MyClass obj1;
    MyClass obj2 = obj1;          // Calls copy constructor
    MyClass obj3 = std::move(obj1); // Calls move constructor
}
