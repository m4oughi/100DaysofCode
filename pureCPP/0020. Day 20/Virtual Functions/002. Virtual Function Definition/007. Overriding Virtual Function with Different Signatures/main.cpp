#include <iostream>
using namespace std;

class Base {
public:
    virtual void show() {
        cout << "Base class show() with no arguments" << endl;
    }
};

class Derived : public Base {
public:
    void show(int x) {
        cout << "Derived class show() with int argument: " << x << endl;
    }
};

int main() {
    Base* basePtr = new Derived();
    basePtr->show(); // Calls Base class show(), not Derived's show()

    delete basePtr;
    return 0;
}
