#include <iostream>

class MyClass {
public:
    MyClass(int v) : value(v) {}

    int getValue() const {
        return value;
    }

    void modifyCounter() const {
        counter++;
    }

private:
    int value;
    mutable int counter = 0;
};

int main() {
    const MyClass obj(100);
    obj.modifyCounter(); // Allowed: modifying mutable member
    int x = obj.getValue(); // Allowed: calling const member function

    return 0;
}