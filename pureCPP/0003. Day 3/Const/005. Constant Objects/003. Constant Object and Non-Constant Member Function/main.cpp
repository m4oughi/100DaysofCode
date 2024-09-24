#include <iostream>

class MyClass {
public:
    void setValue(int val) {
        value = val;
    }

    int getValue() const {
        return value;
    }

private:
    int value = 40;
};

int main() {
    const MyClass obj; // obj is a constant object
    // obj.setValue(50); // NOT allowed: calling non-const member function
    int x = obj.getValue(); // Allowed: calling const member function

    return 0;
}