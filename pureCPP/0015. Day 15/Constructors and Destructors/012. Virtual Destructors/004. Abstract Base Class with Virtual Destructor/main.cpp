#include <iostream>

class AbstractBase {
public:
    AbstractBase() {
        std::cout << "AbstractBase constructor called." << std::endl;
    }

    virtual void show() const = 0;  // Pure virtual function

    virtual ~AbstractBase() {  // Virtual destructor
        std::cout << "AbstractBase destructor called." << std::endl;
    }
};

class Derived : public AbstractBase {
public:
    Derived() {
        std::cout << "Derived constructor called." << std::endl;
    }

    void show() const override {
        std::cout << "Derived class implementation." << std::endl;
    }

    ~Derived() {
        std::cout << "Derived destructor called." << std::endl;
    }
};

int main() {
    AbstractBase* ptr = new Derived();
    ptr->show();  // Call virtual function
    delete ptr;  // Calls Derived and then AbstractBase destructors
    return 0;
}
