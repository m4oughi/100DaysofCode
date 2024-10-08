#include <iostream>
using namespace std;

class Base {
public:
    virtual void show() {
        cout << "Base class virtual show()" << endl;
    }
};

class Derived1 : virtual public Base {
public:
    void show() override {
        cout << "Derived1 class show()" << endl;
    }
};

class Derived2 : virtual public Base {
public:
    void show() override {
        cout << "Derived2 class show()" << endl;
    }
};

class Final : public Derived1, public Derived2 {
public:
    void show() override {
        cout << "Final class show()" << endl;
    }
};

int main() {
    Final obj;
    obj.show();  // Calls Final class show()
    return 0;
}
