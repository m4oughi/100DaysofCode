#include <iostream>
using namespace std;

class Base1 {
public:
    virtual void action(int x) {
        cout << "Action from Base1 with int: " << x << endl;
    }
};

class Base2 {
public:
    virtual void action(double y) {
        cout << "Action from Base2 with double: " << y << endl;
    }
};

class Derived : public Base1, public Base2 {
public:
    void action(int x) override {
        cout << "Action from Derived with int: " << x << endl;
    }
    
    void action(double y) override {
        cout << "Action from Derived with double: " << y << endl;
    }
};

int main() {
    Derived d;
    d.action(10);      // Calls Derived's action(int)
    d.action(3.14);    // Calls Derived's action(double)
    return 0;
}
