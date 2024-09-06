#include <iostream>

class MyClass {
    int* ptr;
    int& ref;
public:
    MyClass(int value) : ptr(new int(value)), ref(*ptr) {}
    ~MyClass() { delete ptr; }

    void print() const {
        std::cout << "Pointer points to: " << *ptr << std::endl;
        std::cout << "Reference refers to: " << ref << std::endl;
    }
};

int main() {
    MyClass obj(42);
    obj.print();  // Outputs: Pointer points to: 42, Reference refers to: 42

    return 0;
}
