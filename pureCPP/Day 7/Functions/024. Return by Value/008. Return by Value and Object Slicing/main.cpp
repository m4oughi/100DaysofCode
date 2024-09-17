#include <iostream>

class Base {
public:
    virtual void show() const {
        std::cout << "Base" << std::endl;
    }
};

class Derived : public Base {
public:
    void show() const override {
        std::cout << "Derived" << std::endl;
    }
};

// Function returning by value
Base createBase() {
    return Derived();  // Object slicing here
}

int main() {
    Base b = createBase();  // Calls createBase(), which returns by value
    b.show();  // Output: Base (slicing occurs)
    return 0;
}
