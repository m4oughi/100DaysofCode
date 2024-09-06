#include <iostream>

class MyClass {
public:
    static void staticMethod() & {
        std::cout << "Static method for l-value" << std::endl;
    }

    static void staticMethod() && {
        std::cout << "Static method for r-value" << std::endl;
    }
};

int main() {
    MyClass::staticMethod();  // Calls r-value version
    MyClass obj;
    obj.staticMethod();  // Calls l-value version
}
