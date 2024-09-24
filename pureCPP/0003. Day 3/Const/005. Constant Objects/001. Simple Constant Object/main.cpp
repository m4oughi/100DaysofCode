#include <iostream>

class MyClass {
public:
    int getValue() const {
        return value;
    }

    void setValue(int val) {
        value = val;
    }

private:
    int value = 10;
};

int main() {
    const MyClass obj; // obj is a constant object
    // obj.setValue(20); // NOT allowed: modifying the object is not allowed
    int x = obj.getValue(); // Allowed: calling const member function

    return 0;
}