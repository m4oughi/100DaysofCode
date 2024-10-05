#include <iostream>
using namespace std;

class Base {
public:
    virtual void show() = 0;  // Pure virtual function
};

class Derived1 : virtual public Base {
public:
    void show() override {
        cout << "Derived1 Show" << endl;
    }
};

class Derived2 : virtual public Base {
public:
    void show() override {
        cout << "Derived2 Show" << endl;
    }
};

class FinalDerived : public Derived1, public Derived2 {
public:
    void show() override {
        cout << "FinalDerived Show" << endl;
    }
};

int main() {
    FinalDerived obj;
    obj.show();  // Calls FinalDerived's show method
    return 0;
}
