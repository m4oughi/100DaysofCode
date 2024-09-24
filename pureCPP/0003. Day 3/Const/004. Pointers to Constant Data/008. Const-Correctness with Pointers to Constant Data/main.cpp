#include <iostream>

class MyClass {
public:
    void setPointer(const int *newPtr) {
        ptr = newPtr; // Changing the pointer's target is allowed
    }

    void displayValue() const {
        std::cout << *ptr << std::endl;
        // *ptr = 170; // NOT allowed: modifying the value pointed by ptr is not allowed
    }

private:
    const int *ptr; // Pointer to constant data as a member variable
};

int main() {
    int e = 180;
    MyClass obj;
    obj.setPointer(&e);
    obj.displayValue();

    return 0;
}