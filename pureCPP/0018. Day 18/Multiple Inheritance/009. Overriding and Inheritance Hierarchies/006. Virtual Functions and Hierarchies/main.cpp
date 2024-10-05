#include <iostream>
using namespace std;

class Base {
public:
    virtual void action() {
        cout << "Action from Base" << endl;
    }
};

class Intermediate1 : virtual public Base {
public:
    void action() override {
        cout << "Action from Intermediate1" << endl;
    }
};

class Intermediate2 : virtual public Base {
public:
    void action() override {
        cout << "Action from Intermediate2" << endl;
    }
};

class Derived : public Intermediate1, public Intermediate2 {
public:
    void action() override {
        cout << "Action from Derived" << endl;
    }
};

int main() {
    Derived d;
    d.action();  // Calls Derived's action, resolves virtual inheritance
    return 0;
}
