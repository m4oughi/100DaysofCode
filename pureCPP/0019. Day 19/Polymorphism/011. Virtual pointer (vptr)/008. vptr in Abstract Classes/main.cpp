#include <iostream>
using namespace std;

class Base {
public:
    virtual void show() = 0;  // Pure virtual function
};

class Derived : public Base {
public:
    void show() override {  // Must override pure virtual function
        cout << "Derived class show function" << endl;
    }
};

int main() {
    Base* basePtr = new Derived();
    basePtr->show();  // Calls Derived's show via vptr

    delete basePtr;
    return 0;
}
