#include <iostream>
using namespace std;

class Base {
public:
    virtual void display() = 0;  // Pure virtual function (abstract class)
};

class Derived : public Base {
public:
    void display() override {
        cout << "Derived class display()" << endl;
    }
};

int main() {
    Base* basePtr = new Derived();
    basePtr->display();  // Calls Derived's display() due to dynamic binding

    delete basePtr;
    return 0;
}
