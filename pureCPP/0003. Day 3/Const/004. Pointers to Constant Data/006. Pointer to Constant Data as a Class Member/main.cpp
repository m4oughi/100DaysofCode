#include <iostream>

class MyClass {
public:
    MyClass(const int &ref) : ptr(&ref) {} // Initialize pointer to constant data
    void displayValue() const {
        std::cout << *ptr << std::endl;
        // *ptr = 130; // NOT allowed: modifying the value pointed by ptr is not allowed
    }

private:
    const int *ptr; // Pointer to constant data as a member variable
};

int main() {
    int c = 140;
    MyClass obj(c);
    obj.displayValue();

    return 0;
}