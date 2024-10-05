#include <iostream>
using namespace std;

class Base1 {
public:
    void showBase1() {
        cout << "Base1 method" << endl;
    }
};

class Base2 {
public:
    void showBase2() {
        cout << "Base2 method" << endl;
    }
};

class Derived : public Base1, public Base2 {
};

int main() {
    Derived d;
    Base1* base1Ptr = static_cast<Base1*>(&d);  // Static cast to Base1
    base1Ptr->showBase1();  // Access Base1's method

    Base2* base2Ptr = static_cast<Base2*>(&d);  // Static cast to Base2
    base2Ptr->showBase2();  // Access Base2's method
    return 0;
}
