#include <iostream>

class MyClass {
private:
    MyClass(int x) : value(x) {  // Private constructor with parameter
        std::cout << "Private constructor called with value: " << value << std::endl;
    }

    int value;

public:
    static MyClass* createDynamicObject(int x) {  // Public method for dynamic allocation
        return new MyClass(x);  // Dynamic memory allocation
    }

    void destroyObject() {  // Member function to deallocate memory
        delete this;
    }
};

int main() {
    MyClass* obj = MyClass::createDynamicObject(10);  // Dynamically allocating object
    obj->destroyObject();  // Manually deallocating memory
    return 0;
}
