#include <iostream>
#include <stdexcept>

class MyClass {
    int* data;
public:
    MyClass() : data(new int(10)) {
        std::cout << "Constructor: Allocating resource.\n";
    }

    // Move constructor with noexcept
    MyClass(MyClass&& other) noexcept : data(other.data) {
        other.data = nullptr;
        std::cout << "Move constructor: Resource moved.\n";
    }

    // Destructor handles potential exception
    ~MyClass() {
        try {
            if (data) {
                delete data;
                std::cout << "Destructor: Releasing resource.\n";
            }
        } catch (...) {
            std::cout << "Destructor: Exception caught during cleanup.\n";
        }
    }
};

int main() {
    MyClass obj1;
    MyClass obj2 = std::move(obj1);  // Moves resource
}
