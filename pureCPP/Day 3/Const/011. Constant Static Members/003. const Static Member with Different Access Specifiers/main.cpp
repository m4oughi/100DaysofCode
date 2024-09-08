#include <iostream>

class MyClass {
private:
    static const int privateValue = 40; // Private constant static member

public:
    static const int publicValue = 50; // Public constant static member

    void printValues() const {
        std::cout << privateValue << " " << publicValue << std::endl;
    }
};

int main() {
    MyClass obj;
    obj.printValues(); // Prints 40 50
    std::cout << MyClass::publicValue << std::endl; // Allowed: accessing public static member
    // std::cout << MyClass::privateValue << std::endl; // NOT allowed: accessing private static member outside the class
}
