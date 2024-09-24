#include <iostream>

class MyClass {
public:
    MyClass(int v) : value(v) {}

    const int& getValue() const { // Constant version
        return value;
    }

    int& getValue() { // Non-constant version
        return value;
    }

private:
    int value;
};

int main() {
    MyClass obj(210);
    const int& constRef = obj.getValue(); // Calls the constant version
    int& nonConstRef = obj.getValue(); // Calls the non-constant version

    // constRef = 220; // NOT allowed: modifying the value through the constant reference is not allowed
    nonConstRef = 230; // Allowed: modifying the value through the non-constant reference is allowed

    return 0;
}