#include <iostream>

class CustomType {
public:
    CustomType(int v) : value(v) {}

    void printValue() const {
        std::cout << value << std::endl;
    }

private:
    int value;
};

class MyClass {
public:
    static const CustomType customValue; // Constant static member of a custom type

    void printCustomValue() const {
        customValue.printValue();
    }
};

const CustomType MyClass::customValue(130); // Initialization of constant static custom type

int main() {
    MyClass obj;
    obj.printCustomValue(); // Prints 130
}