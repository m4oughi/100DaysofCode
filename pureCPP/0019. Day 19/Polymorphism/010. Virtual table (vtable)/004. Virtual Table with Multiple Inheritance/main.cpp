#include <iostream>
using namespace std;

class Base1 {
public:
    virtual void show() {
        cout << "Base1 class show function" << endl;
    }
};

class Base2 {
public:
    virtual void display() {
        cout << "Base2 class display function" << endl;
    }
};

class Derived : public Base1, public Base2 {
public:
    void show() override {
        cout << "Derived class show function" << endl;
    }
    void display() override {
        cout << "Derived class display function" << endl;
    }
};

int main() {
    Derived* derivedPtr = new Derived();
    
    Base1* base1Ptr = derivedPtr;
    base1Ptr->show();   // Calls Derived's show via vtable

    Base2* base2Ptr = derivedPtr;
    base2Ptr->display();  // Calls Derived's display via vtable

    delete derivedPtr;
    return 0;
}
