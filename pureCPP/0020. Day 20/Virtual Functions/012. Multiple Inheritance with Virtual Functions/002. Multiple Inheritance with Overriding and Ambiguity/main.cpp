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
        cout << "Derived class show()" << endl;
    }
};

int main() {
    Derived d;
    d.Base1::show();  // Calls Base1's show()
    d.Base2::show();  // Calls Base2's show()
    d.show();         // Calls Derived's show()
    return 0;
}
