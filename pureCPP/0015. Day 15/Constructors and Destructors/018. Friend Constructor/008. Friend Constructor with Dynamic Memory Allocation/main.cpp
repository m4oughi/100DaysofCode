#include <iostream>

class MyClass {
private:
    MyClass(int x) {
        std::cout << "Private constructor called with value: " << x << std::endl;
    }

public:
    friend MyClass* createDynamicObject(int x);  // Friend function declaration
};

MyClass* createDynamicObject(int x) {
    MyClass* obj = new MyClass(x);  // Dynamically allocating object
    return obj;
}

int main() {
    MyClass* obj = createDynamicObject(99);  // Creating object dynamically using friend function
    delete obj;  // Manually deleting the object
    return 0;
}
