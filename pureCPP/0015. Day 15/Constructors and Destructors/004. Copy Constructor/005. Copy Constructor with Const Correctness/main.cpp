#include <iostream>

class MyClass {
public:
    int value;

    // Copy constructor with const correctness
    MyClass(const MyClass& other) {
        value = other.value;
        std::cout << "Copy constructor called, copied value: " << value << std::endl;
    }

    MyClass(int v) : value(v) {}
};

int main() {
    const MyClass obj1(20);  // Const object
    MyClass obj2 = obj1;  // Copy constructor called, works with const objects
    return 0;
}
