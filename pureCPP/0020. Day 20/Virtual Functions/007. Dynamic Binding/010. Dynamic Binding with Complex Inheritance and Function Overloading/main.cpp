#include <iostream>
using namespace std;

class Base {
public:
    virtual void show() {
        cout << "Base class show()" << endl;
    }

    virtual void show(int x) {
        cout << "Base class show(int): " << x << endl;
    }
};

class Derived : public Base {
public:
    void show() override {
        cout << "Derived class show()" << endl;
    }

    void show(int x) override {
        cout << "Derived class show(int): " << x << endl;
    }
};

int main() {
    Base* basePtr = new Derived();
    basePtr->show();       // Calls Derived's show()
    basePtr->show(100);    // Calls Derived's show(int)

    delete basePtr;
    return 0;
}
