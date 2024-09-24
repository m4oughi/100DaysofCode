#include <iostream>

class MyClass {
public:
    static const int constantValue = 10; // Constant static member

    void printValue() const {
        std::cout << constantValue << std::endl;
    }
};

int main() {
    MyClass obj;
    obj.printValue(); // Prints 10
    // MyClass::constantValue = 20; // NOT allowed: modifying a constant static member is not allowed


    return 0;
}