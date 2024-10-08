#include <iostream>
using namespace std;

class Base {
public:
    virtual void show() {
        cout << "Base show()" << endl;
    }
};

class Intermediate : public Base {
public:
    void show() override {
        cout << "Intermediate show()" << endl;
    }
};

class Derived : public Intermediate {
public:
    void show() override {
        cout << "Derived show()" << endl;
    }
};

int main() {
    Base* basePtr = new Derived();
    basePtr->show();  // Calls Derived's show() due to dynamic binding

    delete basePtr;
    return 0;
}
