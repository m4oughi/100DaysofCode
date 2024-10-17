#include <iostream>

class MyClass {
public:
    int value;

    MyClass(int v) : value(v) {}

    MyClass& operator=(MyClass &&rhs) {  // Lvalue reference in move assignment operator
        if (this != &rhs) {
            value = rhs.value;  // Move value from rhs
            rhs.value = 0;  // Reset rhs
        }
        return *this;
    }
};

int main() {
    MyClass a(10), b(20);
    a = std::move(b);  // Move assignment
    std::cout << a.value << " " << b.value;  // Prints 20 0
    return 0;
}
