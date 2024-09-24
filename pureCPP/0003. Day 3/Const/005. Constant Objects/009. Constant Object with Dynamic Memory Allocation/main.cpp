#include <iostream>

class MyClass {
public:
    MyClass(int v) : value(new int(v)) {}

    ~MyClass() {
        delete value; // Freeing allocated memory
    }

    int getValue() const {
        return *value;
    }

private:
    int *value;
};

int main() {
    const MyClass obj(150);
    int x = obj.getValue(); // Allowed: accessing value through const object
    // *obj.value = 160; // NOT allowed: value is private and cannot be modified

    return 0;
}