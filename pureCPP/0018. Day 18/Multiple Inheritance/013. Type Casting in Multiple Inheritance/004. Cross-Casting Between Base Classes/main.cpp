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
    Base1* base1Ptr = &d;  // Base1 pointer to Derived object

    // Cross-casting: Base1 to Base2 via dynamic_cast
    Base2* base2Ptr = dynamic_cast<Base2*>(base1Ptr);
    if (base2Ptr) {
        base2Ptr->showBase2();  // Calls Base2's method
    } else {
        cout << "Failed to cast Base1* to Base2*" << endl;
    }

    return 0;
}
