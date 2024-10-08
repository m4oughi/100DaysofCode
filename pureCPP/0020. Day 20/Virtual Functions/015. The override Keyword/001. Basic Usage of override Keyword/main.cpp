#include <iostream>
using namespace std;

class Base {
public:
    virtual void show() {
        cout << "Base class show()" << endl;
    }
};

class Derived : public Base {
public:
    void show() override {  // Correctly overriding the base class function
        cout << "Derived class show()" << endl;
    }
};

int main() {
    Base* obj = new Derived();
    obj->show();  // Calls Derived's show() function due to override
    delete obj;
    return 0;
}
