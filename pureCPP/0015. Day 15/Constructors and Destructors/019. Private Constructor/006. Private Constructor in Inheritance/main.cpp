#include <iostream>

class Base {
private:
    Base() {  // Private constructor
        std::cout << "Base class private constructor called" << std::endl;
    }

public:
    static Base createBaseObject() {  // Public static method
        return Base();
    }
};

class Derived : public Base {
public:
    void create() {
        Base obj = Base::createBaseObject();  // Accessing base class's private constructor
    }
};

int main() {
    Derived derivedObj;
    derivedObj.create();  // Creating base object through derived class method
    return 0;
}
