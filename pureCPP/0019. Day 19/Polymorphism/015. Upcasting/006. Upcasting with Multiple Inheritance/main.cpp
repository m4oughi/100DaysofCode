#include <iostream>
using namespace std;

class Base1 {
public:
    virtual void show() {
        cout << "Base1 show function" << endl;
    }
};

class Base2 {
public:
    virtual void display() {
        cout << "Base2 display function" << endl;
    }
};

class Derived : public Base1, public Base2 {
public:
    void show() override {
        cout << "Derived show function" << endl;
    }
    void display() override {
        cout << "Derived display function" << endl;
    }
};

int main() {
    Derived derivedObj;
    Base1* base1Ptr = &derivedObj;  // Upcasting to Base1
    Base2* base2Ptr = &derivedObj;  // Upcasting to Base2

    base1Ptr->show();    // Calls Derived's show function
    base2Ptr->display(); // Calls Derived's display function

    return 0;
}
