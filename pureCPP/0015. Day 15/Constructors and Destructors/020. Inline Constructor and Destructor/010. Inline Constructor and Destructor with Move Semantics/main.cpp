#include <iostream>

class MyClass {
private:
    int* data;

public:
    // Inline constructor
    MyClass(int size) : data(new int[size]) {
        std::cout << "Inline constructor called, allocated memory for array" << std::endl;
    }

    // Inline move constructor
    MyClass(MyClass&& other) noexcept : data(other.data) {
        other.data = nullptr;
        std::cout << "Inline move constructor called" << std::endl;
    }

    // Inline destructor
    ~MyClass() {
        if (data) {
            std::cout << "Inline destructor called, releasing memory" << std::endl;
            delete[] data;
        } else {
            std::cout << "Inline destructor called, nothing to release" << std::endl;
        }
    }
};

int main() {
    MyClass obj1(10);             // Inline constructor
    MyClass obj2 = std::move(obj1);  // Inline move constructor
    return 0;
}
