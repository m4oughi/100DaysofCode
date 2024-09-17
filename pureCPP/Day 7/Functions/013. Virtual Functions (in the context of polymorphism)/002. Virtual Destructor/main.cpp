#include <iostream>

class Base {
public:
    virtual ~Base() {
        std::cout << "Base destructor called." << std::endl;
    }
};

class Derived : public Base {
public:
    ~Derived() override {
        std::cout << "Derived destructor called." << std::endl;
    }
};

int main() {
    Base* obj = new Derived();
    delete obj;  // Calls Derived's destructor, then Base's destructor

    return 0;
}
