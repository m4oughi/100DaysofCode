#include <iostream>

class MyClass {
public:
    int value;

    MyClass(int v) : value(v) {}

    MyClass& operator=(const MyClass &rhs) {  // Lvalue reference in assignment operator
        if (this != &rhs) {
            value = rhs.value;  // Copying value from rhs
        }
        return *this;
    }
};

int main() {
    MyClass a(10), b(20);
    a = b;  // Copy assignment
    std::cout << a.value;  // Prints 20

    return 0;
}
