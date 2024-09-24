#include <iostream>

class Base {
public:
    virtual void show() {
        std::cout << "Base class function" << std::endl;
    }
    virtual ~Base() = default;
};

class Intermediate : virtual public Base {
public:
    void show() override {
        std::cout << "Intermediate class function" << std::endl;
    }
};

class Derived : public Intermediate {
public:
    void show() override {
        std::cout << "Derived class function" << std::endl;
    }
};

int main() {
    Derived derivedObj;
    Intermediate* interPtr = &derivedObj;
    Base* basePtr = dynamic_cast<Base*>(interPtr);

    if (basePtr) {
        basePtr->show();  // Output: Derived class function
    }

    return 0;
}
