#include <iostream>

class MyClass {
public:
    int &ref;

    MyClass(int &r) : ref(r) {}  // Constructor takes an Lvalue reference

    void set(int value) {
        ref = value;  // Modifies the original Lvalue
    }
};

int main() {
    int x = 10;
    MyClass obj(x);  // obj holds a reference to x
    obj.set(50);     // Modifies x through obj
    std::cout << x;  // Prints 50

    return 0;
}
