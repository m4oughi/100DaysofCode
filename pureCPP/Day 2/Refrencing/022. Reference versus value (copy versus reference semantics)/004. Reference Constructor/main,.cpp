#include <iostream>

class MyClass {
    int value;
public:
    MyClass(int v) : value(v) {}
    MyClass(const MyClass& other) : value(other.value) {}
    int getValue() const { return value; }
};

void printObject(const MyClass& obj) {  // Reference parameter
    std::cout << "Object value: " << obj.getValue() << std::endl;
}

int main() {
    MyClass obj1(20);
    printObject(obj1);  // Pass by reference (no copy)

    return 0;
}
