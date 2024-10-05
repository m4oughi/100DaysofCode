#include <iostream>
using namespace std;

class Base1 {
public:
    virtual void show() {
        cout << "Base1 method" << endl;
    }
};

class Base2 {
public:
    virtual void show() {
        cout << "Base2 method" << endl;
    }
};

class Derived : public Base1, public Base2 {
};

int main() {
    Derived d;
    Base1* base1Ptr = &d;

    // Reinterpret cast: Unsafe cast from Base1 to Base2
    Base2* base2Ptr = reinterpret_cast<Base2*>(base1Ptr);
    base2Ptr->show();  // May result in undefined behavior

    return 0;
}
