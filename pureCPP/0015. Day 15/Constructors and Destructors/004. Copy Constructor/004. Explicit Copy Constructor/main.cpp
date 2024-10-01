#include <iostream>

class MyClass {
public:
    int value;

    // Explicit copy constructor
    explicit MyClass(const MyClass& other) : value(other.value) {
        std::cout << "Explicit copy constructor called, copied value: " << value << std::endl;
    }

    MyClass(int v) : value(v) {}
};

int main() {
    MyClass obj1(10);
    // MyClass obj2 = obj1;  // This will give an error because the copy constructor is explicit
    MyClass obj2(obj1);  // Copy constructor is called explicitly
    return 0;
}
