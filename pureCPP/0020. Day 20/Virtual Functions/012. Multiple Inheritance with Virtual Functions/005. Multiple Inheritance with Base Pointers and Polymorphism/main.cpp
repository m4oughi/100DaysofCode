#include <iostream>
using namespace std;

class Base1 {
public:
    virtual void show() {
        cout << "Base1 show()" << endl;
    }
};

class Base2 {
public:
    virtual void display() {
        cout << "Base2 display()" << endl;
    }
};

class Derived : public Base1, public Base2 {
public:
    void show() override {
        cout << "Derived class show()" << endl;
    }

    void display() override {
        cout << "Derived class display()" << endl;
    }
};

int main() {
    Base1* b1Ptr = new Derived();
    Base2* b2Ptr = new Derived();

    b1Ptr->show();    // Calls Derived's show()
    b2Ptr->display(); // Calls Derived's display()

    delete b1Ptr;
    delete b2Ptr;
    return 0;
}
