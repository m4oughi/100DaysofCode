#include <iostream>
using namespace std;

class Base1 {
public:
    void show() {
        cout << "Base1 method" << endl;
    }
};

class Base2 {
public:
    void show() {
        cout << "Base2 method" << endl;
    }
};

class Derived : public Base1, public Base2 {
public:
    void display() {
        Base1::show();  // Disambiguates and calls Base1's show
        Base2::show();  // Disambiguates and calls Base2's show
    }
};

int main() {
    Derived d;
    d.display();  // Calls both Base1 and Base2 show methods

    Base1* base1Ptr = &d;
    base1Ptr->show();  // Calls Base1's method directly

    Base2* base2Ptr = &d;
    base2Ptr->show();  // Calls Base2's method directly

    return 0;
}
