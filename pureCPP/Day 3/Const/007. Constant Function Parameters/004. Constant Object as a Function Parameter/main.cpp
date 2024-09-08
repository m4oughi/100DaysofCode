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

void printObject(const MyClass obj) {
    std::cout << obj.getValue() << std::endl;
    // obj.setValue(70); // NOT allowed: modifying the const object is not allowed
}

int main() {
    MyClass obj(80);
    printObject(obj); // Passing a non-const object as a const parameter

    return 0;
}