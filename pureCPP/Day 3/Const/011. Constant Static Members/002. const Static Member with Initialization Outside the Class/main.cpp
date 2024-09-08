#include <iostream>

class MyClass {
public:
    static const int constantValue; // Declaration of constant static member

    void printValue() const {
        std::cout << constantValue << std::endl;
    }
};

const int MyClass::constantValue = 30; // Definition and initialization outside the class

int main() {
    MyClass obj;
    obj.printValue(); // Prints 30
}