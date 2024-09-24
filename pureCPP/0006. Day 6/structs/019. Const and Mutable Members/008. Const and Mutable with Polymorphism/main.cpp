#include <iostream>

struct Base {
    mutable int timesAccessed;

    Base() : timesAccessed(0) {}

    virtual void show() const {
        ++timesAccessed;
        std::cout << "Base accessed " << timesAccessed << " times" << std::endl;
    }
    
    virtual ~Base() {}
};

struct Derived : public Base {
    void show() const override {
        std::cout << "Derived class" << std::endl;
        Base::show();  // Call base class method
    }
};

int main() {
    Base* b = new Derived();
    b->show();
    b->show();
    
    delete b;
    return 0;
}
