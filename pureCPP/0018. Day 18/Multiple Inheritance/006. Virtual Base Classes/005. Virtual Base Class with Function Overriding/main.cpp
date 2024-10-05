#include <iostream>
using namespace std;

class Base {
public:
    virtual void display() {
        cout << "Base Display" << endl;
    }
};

class Derived1 : virtual public Base {
public:
    void display() override {
        cout << "Derived1 Display" << endl;
    }
};

class Derived2 : virtual public Base {
public:
    void display() override {
        cout << "Derived2 Display" << endl;
    }
};

class FinalDerived : public Derived1, public Derived2 {
public:
    void display() override {
        cout << "FinalDerived Display" << endl;
    }
};

int main() {
    FinalDerived obj;
    obj.display();  // Calls FinalDerived's display()
    return 0;
}
