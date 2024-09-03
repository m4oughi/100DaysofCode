#include <iostream>

class Base {
public:
    virtual void show() const {
        std::cout << "Base class" << std::endl;
    }
};

class Derived1 : public Base {
public:
    void show() const override {
        std::cout << "Derived class 1" << std::endl;
    }
};

class Derived2 : public Base {
public:
    void show() const override {
        std::cout << "Derived class 2" << std::endl;
    }
};

int main() {
    Base* ptrArray[2];

    ptrArray[0] = new Derived1();
    ptrArray[1] = new Derived2();

    // Call the show method (demonstrating polymorphism)
    for (int i = 0; i < 2; ++i) {
        ptrArray[i]->show();  // Outputs: Derived class 1, Derived class 2
    }

    // Free the allocated memory
    for (int i = 0; i < 2; ++i) {
        delete ptrArray[i];
    }
}
