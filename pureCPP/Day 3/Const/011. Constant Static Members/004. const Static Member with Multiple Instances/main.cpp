#include <iostream>

class MyClass {
public:
    static const int sharedValue = 60; // Shared across all instances

    void printValue() const {
        std::cout << sharedValue << std::endl;
    }
};

int main() {
    MyClass obj1, obj2;
    obj1.printValue(); // Prints 60
    obj2.printValue(); // Prints 60
}