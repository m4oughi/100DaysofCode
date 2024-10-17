#include <iostream>

class MyClass {
    int* data;
public:
    MyClass() : data(new int(10)) {
        std::cout << "Constructor: Allocating resource.\n";
    }

    ~MyClass() {
        delete data;
        std::cout << "Destructor: Releasing resource.\n";
    }

    // Move constructor
    MyClass(MyClass&& other) noexcept : data(other.data) {
        other.data = nullptr;  // Prevent double delete
        std::cout << "Move constructor: Resource moved.\n";
    }
};

int main() {
    MyClass obj1;
    MyClass obj2 = std::move(obj1);  // Resource is moved to obj2
}
