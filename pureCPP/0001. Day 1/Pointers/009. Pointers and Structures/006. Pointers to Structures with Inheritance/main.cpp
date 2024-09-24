#include <iostream>

struct Base {
    int baseValue;
    virtual void show() {
        std::cout << "Base Value: " << baseValue << std::endl;
    }
};

struct Derived : public Base {
    int derivedValue;
    void show() override {
        std::cout << "Base Value: " << baseValue << ", Derived Value: " << derivedValue << std::endl;
    }
};

int main() {
    Base* ptr = new Derived{1, 2};

    ptr->show();  // Calls Derived::show() because of virtual function

    delete ptr;  // Correct deletion since destructor is virtual

    return 0;
}
