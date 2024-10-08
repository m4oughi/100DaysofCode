#include <iostream>
using namespace std;

class Base {
public:
    virtual int show() {
        cout << "Base class show() returning int" << endl;
        return 1;
    }
};

class Derived : public Base {
public:
    double show() override {
        cout << "Derived class show() returning double" << endl;
        return 1.5;
    }
};

int main() {
    Base* basePtr = new Derived();
    cout << basePtr->show() << endl; // Calls Derived's show()

    delete basePtr;
    return 0;
}
