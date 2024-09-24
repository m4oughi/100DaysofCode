#include <iostream>

class MyClass {
public:
    MyClass(int v) : value(v) {}

    const int& getValue() const {
        return value; // Returning a constant reference to value
    }

private:
    int value;
};

int main() {
    MyClass obj(180);
    const int &valRef = obj.getValue(); // valRef is a constant reference to the object's value
    // valRef = 190; // NOT allowed: modifying the value through valRef is not allowed

    return 0;
}