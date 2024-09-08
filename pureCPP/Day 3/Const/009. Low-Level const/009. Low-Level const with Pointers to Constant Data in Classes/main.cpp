#include <iostream>

class MyClass {
public:
    MyClass(const int *p) : ptr(p) {}

    const int* getPtr() const {
        return ptr;
    }

private:
    const int *ptr; // ptr is a pointer to const int
};

int main() {
    int e = 200;
    MyClass obj(&e);
    const int* ptr = obj.getPtr();
    // *ptr = 210; // NOT allowed: modifying the value through ptr is not allowed

    return 0;
}