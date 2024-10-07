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
    void show() override {  // Only show is overridden
        cout << "Derived class show function" << endl;
    }
    // print() is inherited as is from Base
};

int main() {
    Base* basePtr = new Derived();
    basePtr->show();   // Calls Derived's show
    basePtr->print();  // Calls Base's print

    delete basePtr;
    return 0;
}
