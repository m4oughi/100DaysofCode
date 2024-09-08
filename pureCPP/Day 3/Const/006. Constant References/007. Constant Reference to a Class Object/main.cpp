#include <iostream>

class MyClass {
public:
    MyClass(int v) : value(v) {}

    int getValue() const {
        return value;
    }

    void setValue(int v) {
        value = v;
    }

private:
    int value;
};

int main() {
    const MyClass &ref = MyClass(120); // ref is a constant reference to a temporary object
    int val = ref.getValue(); // Allowed: calling const member function
    // ref.setValue(130); // NOT allowed: modifying the object through ref is not allowed

    return 0;
}