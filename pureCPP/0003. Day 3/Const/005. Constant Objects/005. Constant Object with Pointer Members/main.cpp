#include <iostream>

class MyClass {
public:
    MyClass(int v) : value(new int(v)) {}

    int* getValuePtr() const {
        return value;
    }

private:
    int *value;
};


int main() {
    const MyClass obj(70);
    int *ptr = obj.getValuePtr(); // Allowed: accessing pointer member
    *ptr = 80; // Allowed: modifying the value pointed to by the pointer
    // obj = MyClass(90); // NOT allowed: modifying the const object

    return 0;
}