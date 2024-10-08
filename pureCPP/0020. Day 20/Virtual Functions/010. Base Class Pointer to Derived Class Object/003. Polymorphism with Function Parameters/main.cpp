#include <iostream>
using namespace std;

class Base {
public:
    virtual void show(int x) {
        cout << "Base class show(int): " << x << endl;
    }
};

class Derived : public Base {
public:
    void show(int x) override {
        cout << "Derived class show(int): " << x << endl;
    }
};

int main() {
    Base* basePtr = new Derived();
    basePtr->show(42);  // Calls Derived's show(int)

    delete basePtr;
    return 0;
}
