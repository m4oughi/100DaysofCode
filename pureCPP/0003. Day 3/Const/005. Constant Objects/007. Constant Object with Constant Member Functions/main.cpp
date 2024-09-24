#include <iostream>

class MyClass {
public:
    MyClass(int v) : value(v) {}

    int getValue() const {
        return value;
    }

    void setValue(int v) const {
        // This function does not modify any members
    }

private:
    int value;
};

int main() {
    const MyClass obj(110);
    obj.getValue(); // Allowed: calling const member function
    obj.setValue(120); // Allowed: function signature is const, so no modification

    return 0;
}