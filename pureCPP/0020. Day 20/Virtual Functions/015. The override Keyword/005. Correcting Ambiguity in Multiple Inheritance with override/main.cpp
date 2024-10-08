#include <iostream>
using namespace std;

class Base1 {
public:
    virtual void show() {
        cout << "Base1 class show()" << endl;
    }
};

class Base2 {
public:
    virtual void show() {
        cout << "Base2 class show()" << endl;
    }
};

class Derived : public Base1, public Base2 {
public:
    void Base1::show() override {  // Correctly overrides Base1's show()
        cout << "Derived class show() from Base1" << endl;
    }
};

int main() {
    Derived obj;
    obj.Base1::show();  // Calls the correctly overridden function from Base1
    return 0;
}
