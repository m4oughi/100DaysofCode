#include <iostream>

class MyClass {
    int* data;
public:
    MyClass() : data(new int(42)) {
        std::cout << "Constructor: Allocating resource.\n";
    }

    MyClass(MyClass&& other) noexcept : data(nullptr) {
        std::swap(data, other.data);  // Use swap for safe resource management
        std::cout << "Move constructor: Resource swapped.\n";
    }

    ~MyClass() {
        if (data) {
            delete data;
            std::cout << "Destructor: Releasing resource.\n";
        } else {
            std::cout << "Destructor: Nothing to release.\n";
        }
    }
};

int main() {
    MyClass obj1;
    MyClass obj2 = std::move(obj1);  // Resource swapped to obj2
}
