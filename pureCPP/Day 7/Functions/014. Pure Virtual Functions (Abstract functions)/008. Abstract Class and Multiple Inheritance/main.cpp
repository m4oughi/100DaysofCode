#include <iostream>

class AbstractInterface1 {
public:
    virtual void interfaceMethod1() const = 0;  // Pure virtual function
};

class AbstractInterface2 {
public:
    virtual void interfaceMethod2() const = 0;  // Pure virtual function
};

class ConcreteClass : public AbstractInterface1, public AbstractInterface2 {
public:
    void interfaceMethod1() const override {
        std::cout << "ConcreteClass interfaceMethod1." << std::endl;
    }

    void interfaceMethod2() const override {
        std::cout << "ConcreteClass interfaceMethod2." << std::endl;
    }
};

int main() {
    ConcreteClass obj;
    obj.interfaceMethod1();
    obj.interfaceMethod2();

    return 0;
}
