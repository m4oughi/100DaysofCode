#include <iostream>
using namespace std;

class Base1 {
public:
    virtual void showBase1() {
        cout << "Base1 method" << endl;
    }
};

class Base2 {
public:
    virtual void showBase2() {
        cout << "Base2 method" << endl;
    }
};

class Derived : public Base1, public Base2 {
};

int main() {
    Derived d;
    Base1* base1Ptr = dynamic_cast<Base1*>(&d);  // Safe cast to Base1
    if (base1Ptr) {
        base1Ptr->showBase1();  // Calls Base1's method
    }

    Base2* base2Ptr = dynamic_cast<Base2*>(&d);  // Safe cast to Base2
    if (base2Ptr) {
        base2Ptr->showBase2();  // Calls Base2's method
    }

    return 0;
}
