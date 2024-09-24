#include <iostream>

class MyClass {
public:
    MyClass(int v) : value(v) {}

    const int* getValue() const { // Returning a pointer to const int
        return &value;
    }

private:
    int value;
};

int main() {
    MyClass obj(140);
    const int* valPtr = obj.getValue();
    // *valPtr = 150; // NOT allowed: modifying the value through valPtr is not allowed

    return 0;
}