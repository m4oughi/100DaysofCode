#include <iostream>

class MyClass {
    int value;
public:
    MyClass(int v) : value(v) {}
    const int& getValue() const { return value; }
};

int main() {
    MyClass* ptr = nullptr;
    // const int& ref = ptr->getValue(); // Error: ptr is null

    return 0;
}
