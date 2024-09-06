#include <iostream>

class MyClass {
public:
    void lValueMethod() & {  // Can be called on l-values
        std::cout << "lValueMethod called" << std::endl;
    }

    void rValueMethod() && {  // Can be called on r-values
        std::cout << "rValueMethod called" << std::endl;
    }
};

int main() {
    MyClass obj;
    obj.lValueMethod();  // Works fine

    MyClass().rValueMethod();  // Works fine

    // MyClass().lValueMethod();  // Error: lValueMethod cannot be called on a temporary object
}
