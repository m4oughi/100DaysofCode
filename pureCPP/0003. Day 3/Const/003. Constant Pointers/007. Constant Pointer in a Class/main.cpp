#include <iostream>

class MyClass {
public:
    MyClass(int &ref) : ptr(&ref) {} // Initialize the constant pointer
    void modifyValue() {
        *ptr = 120; // Allowed: modifying the value pointed by ptr
        // ptr = nullptr; // NOT allowed: changing the pointer's target
    }

private:
    int *const ptr; // Constant pointer as a member variable
};

int main() {
    int c = 130;
    MyClass obj(c);
    obj.modifyValue();

    return 0;
}