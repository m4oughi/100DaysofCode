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
    const MyClass obj(200);
    const MyClass &ref = obj; // ref is a constant reference to a constant object
    int val = ref.getValue(); // Allowed: calling const member function
    // ref.setValue(210); // NOT allowed: modifying the object through ref is not allowed

    return 0;
}