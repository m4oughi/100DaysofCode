#include <iostream>

class MyClass {
public:
    MyClass(int v) : value(v) {}

    int getValue() const {
        return value;
    }

private:
    int value;
};

int main() {
    const MyClass obj(30); // obj is a constant object initialized with value 30
    int x = obj.getValue(); // Allowed: calling const member function

    return 0;
}