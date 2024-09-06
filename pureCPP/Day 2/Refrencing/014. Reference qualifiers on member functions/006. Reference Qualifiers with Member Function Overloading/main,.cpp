#include <iostream>

class MyClass {
public:
    void foo() & {  // l-value reference
        std::cout << "l-value foo" << std::endl;
    }

    void foo() && {  // r-value reference
        std::cout << "r-value foo" << std::endl;
    }
};

int main() {
    MyClass obj;
    obj.foo();  // Calls l-value version

    MyClass().foo();  // Calls r-value version

    // MyClass().foo();  // Error: foo() cannot be called on a temporary object
}
