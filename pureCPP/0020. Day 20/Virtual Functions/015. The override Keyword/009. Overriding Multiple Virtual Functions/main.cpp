#include <iostream>
using namespace std;

class Base {
public:
    virtual void show() {
        cout << "Base class show()" << endl;
    }

    virtual void print() {
        cout << "Base class print()" << endl;
    }
};

class Derived : public Base {
public:
    void show() override {  // Correctly overrides show()
        cout << "Derived class show()" << endl;
    }

    void print() override {  // Correctly overrides print()
        cout << "Derived class print()" << endl;
    }
};

int main() {
    Base* obj = new Derived();
    obj->show();   // Calls Derived's show()
    obj->print();  // Calls Derived's print()
    delete obj;
    return 0;
}
