#include <iostream>

class MyClass {
    int* data;
public:
    MyClass() : data(new int(20)) {
        std::cout << "Constructor: Allocating resource.\n";
    }

    ~MyClass() {
        delete data;
        std::cout << "Destructor: Releasing resource.\n";
    }

    // Move assignment operator
    MyClass& operator=(MyClass&& other) noexcept {
        if (this != &other) {
            delete data;  // Release current resource
            data = other.data;  // Take ownership of other's resource
            other.data = nullptr;  // Prevent double deletion
            std::cout << "Move assignment operator: Resource moved.\n";
        }
        return *this;
    }
};

int main() {
    MyClass obj1;
    MyClass obj2;
    obj2 = std::move(obj1);  // Calls move assignment operator
}
