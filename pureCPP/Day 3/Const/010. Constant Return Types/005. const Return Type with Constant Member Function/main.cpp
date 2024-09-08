#include <iostream>

class MyClass {
public:
    MyClass(int v) : value(v) {}

    const int& getValue() const { // Constant member function returning a constant reference
        return value;
    }

private:
    int value;
};

int main() {
    MyClass obj(100);
    const int& ref = obj.getValue();
    // ref = 110; // NOT allowed: modifying the value through the reference is not allowed

    return 0;
}