#include <iostream>
using namespace std;

class Base {
public:
    virtual void show() {
        cout << "Base class show function" << endl;
    }
};

class Intermediate : public Base {
public:
    void show() override {
        cout << "Intermediate class show function" << endl;
    }
};

class Derived : public Intermediate {
public:
    void show() override {
        cout << "Derived class show function" << endl;
    }
};

int main() {
    Derived derivedObj;
    Base* basePtr = &derivedObj;  // Upcasting from Derived to Base
    basePtr->show();  // Calls Derived's show function due to polymorphism

    return 0;
}
