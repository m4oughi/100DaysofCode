#include <iostream>
using namespace std;

class Base {
public:
    virtual void display() {
        cout << "Base class display function" << endl;
    }
};

class Derived : public Base {
public:
    void display() override {
        cout << "Derived class display function" << endl;
    }
};

int main() {
    Base* basePtr = new Derived();
    basePtr->display();  // Calls Derived's display function

    delete basePtr;
    return 0;
}
