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
    Base* basePtr = new Derived();
    basePtr->show();  // Calls Derived's show function

    delete basePtr;
    return 0;
}
