#include <iostream>

class MyClass {
public:
    MyClass(int v) : value(v) {}

    const int getValue() const { // Returning a constant value
        return value;
    }

private:
    int value;
};

int main() {
    MyClass obj(80);
    int val = obj.getValue();
    // obj.getValue() = 90; // NOT allowed: modifying the return value directly is not allowed

    return 0;
}