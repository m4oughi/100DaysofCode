#include <iostream>
using namespace std;

class Base {
public:
    virtual void show() = 0;  // Pure virtual function
};

class Derived : public Base {
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
