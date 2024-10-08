#include <iostream>
using namespace std;

class Base {
public:
    virtual void show() = 0; // Pure virtual function
};

class Derived : public Base {
public:
    void show() override {
        cout << "Derived class definition of show()" << endl;
    }
};

int main() {
    Base* basePtr = new Derived();
    basePtr->show(); // Calls Derived's show()

    delete basePtr;
    return 0;
}
