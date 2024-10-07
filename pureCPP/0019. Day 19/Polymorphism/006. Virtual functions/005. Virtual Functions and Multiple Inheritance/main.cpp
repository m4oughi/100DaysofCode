#include <iostream>
using namespace std;

class Base1 {
public:
    virtual void display() {
        cout << "Base1 display" << endl;
    }
};

class Base2 {
public:
    virtual void display() {
        cout << "Base2 display" << endl;
    }
};

class Derived : public Base1, public Base2 {
public:
    void display() override {
        cout << "Derived display" << endl;
    }
};

int main() {
    Derived d;
    Base1* b1 = &d;
    Base2* b2 = &d;

    b1->display();  // Calls Derived's display
    b2->display();  // Calls Derived's display

    return 0;
}
