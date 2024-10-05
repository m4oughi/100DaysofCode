#include <iostream>
using namespace std;

class Base1 {
public:
    virtual void show() {
        cout << "Base1 Show" << endl;
    }
};

class Base2 {
public:
    virtual void show() {
        cout << "Base2 Show" << endl;
    }
};

class Derived : public Base1, public Base2 {
public:
    void show() override {
        cout << "Derived Show" << endl;
    }
};

int main() {
    Derived obj;
    obj.show();  // Calls Derived's overridden method
    return 0;
}
