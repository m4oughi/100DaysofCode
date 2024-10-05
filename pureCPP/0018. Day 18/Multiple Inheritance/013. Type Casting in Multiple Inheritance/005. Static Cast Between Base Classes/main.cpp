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
    Base1* base1Ptr = &d;  // Base1 pointer to Derived object

    // Cross-casting: Base1 to Base2 via static_cast (unsafe but valid in this case)
    Base2* base2Ptr = static_cast<Base2*>(base1Ptr);
    base2Ptr->showBase2();  // Calls Base2's method

    return 0;
}
