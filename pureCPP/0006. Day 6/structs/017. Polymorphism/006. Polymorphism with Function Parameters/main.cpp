#include <iostream>

struct Base {
    virtual void show() {
        std::cout << "Base class function" << std::endl;
    }
};

struct Derived : public Base {
    void show() override {
        std::cout << "Derived class function" << std::endl;
    }
};

void print(Base* basePtr) {
    basePtr->show();  // Calls virtual function based on actual object
}

int main() {
    Base* baseObj = new Base;
    Derived* derivedObj = new Derived;

    print(baseObj);     // Calls Base class function
    print(derivedObj);  // Calls Derived class function

    delete baseObj;
    delete derivedObj;
}
