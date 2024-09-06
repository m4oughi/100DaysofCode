#include <iostream>

class MyClass {
    int value;
public:
    MyClass(int v) : value(v) {}
    MyClass(const MyClass& other) : value(other.value) {  // Copy constructor
        std::cout << "Copy constructor called" << std::endl;
    }
    int getValue() const { return value; }
};

int main() {
    MyClass obj1(10);
    MyClass obj2 = obj1;  // Copy constructor is called
    std::cout << "obj2 value: " << obj2.getValue() << std::endl;  // Output: 10

    return 0;
}
