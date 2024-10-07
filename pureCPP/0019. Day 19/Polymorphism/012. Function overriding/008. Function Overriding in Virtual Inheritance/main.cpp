#include <iostream>
using namespace std;

class Base {
public:
    virtual void display() {
        cout << "Base class display function" << endl;
    }
};

class Derived1 : virtual public Base {
public:
    void display() override {
        cout << "Derived1 class display function" << endl;
    }
};

class Derived2 : virtual public Base {
public:
    void display() override {
        cout << "Derived2 class display function" << endl;
    }
};

class Final : public Derived1, public Derived2 {
public:
    void display() override {
        cout << "Final class display function" << endl;
    }
};

int main() {
    Final finalObj;
    finalObj.display();  // Calls Final's display function

    return 0;
}
