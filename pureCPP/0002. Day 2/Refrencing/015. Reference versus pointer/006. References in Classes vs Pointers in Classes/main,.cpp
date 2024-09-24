#include <iostream>

class MyClassWithPointer {
    int* ptr;
public:
    MyClassWithPointer(int value) : ptr(new int(value)) {}
    ~MyClassWithPointer() { delete ptr; }

    void print() const {
        std::cout << "Pointer points to: " << *ptr << std::endl;
    }
};

class MyClassWithReference {
    int& ref;
public:
    MyClassWithReference(int& value) : ref(value) {}

    void print() const {
        std::cout << "Reference refers to: " << ref << std::endl;
    }
};

int main() {
    int value = 10;

    MyClassWithPointer obj1(value);
    obj1.print();  // Outputs: Pointer points to: 10

    MyClassWithReference obj2(value);
    obj2.print();  // Outputs: Reference refers to: 10

    return 0;
}
