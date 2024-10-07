#include <iostream>
using namespace std;

class Base {
public:
    virtual void show() {
        cout << "Base class show function" << endl;
    }
    virtual void print() {
        cout << "Base class print function" << endl;
    }
};

class Derived : public Base {
public:
    void show() override {
        cout << "Derived class show function" << endl;
    }
    void print() override {
        cout << "Derived class print function" << endl;
    }
};

int main() {
    Base* basePtr = new Derived();
    basePtr->show();   // Calls Derived's show function
    basePtr->print();  // Calls Derived's print function

    delete basePtr;
    return 0;
}
