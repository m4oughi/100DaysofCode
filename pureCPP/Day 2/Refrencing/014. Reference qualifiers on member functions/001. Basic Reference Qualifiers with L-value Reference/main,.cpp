#include <iostream>

class MyClass {
public:
    void lValueOnly() & {  // l-value reference qualifier
        std::cout << "Called on l-value" << std::endl;
    }

    void rValueOnly() && {  // r-value reference qualifier
        std::cout << "Called on r-value" << std::endl;
    }
};

int main() {
    MyClass obj;
    obj.lValueOnly();  // Works fine

    MyClass().rValueOnly();  // Works fine

    // MyClass().lValueOnly();  // Error: lValueOnly() cannot be called on a temporary object
}
