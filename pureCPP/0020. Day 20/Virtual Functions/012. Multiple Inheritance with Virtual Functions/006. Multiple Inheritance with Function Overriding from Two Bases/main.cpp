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
    virtual void show() {
        cout << "Base2 show()" << endl;
    }
};

class Derived : public Base1, public Base2 {
public:
    void show() override {
        cout << "Derived class show() overriding both Base1 and Base2" << endl;
    }
};

int main() {
    Derived d;
    d.show();         // Calls Derived's show() that overrides both Base1 and Base2
    d.Base1::show();  // Calls Base1's show()
    d.Base2::show();  // Calls Base2's show()
    return 0;
}
