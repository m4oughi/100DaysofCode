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
    Derived derivedObj;

    Base1* base1Ptr = &derivedObj;
    base1Ptr->show();  // Resolved via Base1's vptr

    Base2* base2Ptr = &derivedObj;
    base2Ptr->display();  // Resolved via Base2's vptr

    return 0;
}
