#include <iostream>
using namespace std;

class Base {
public:
    Base() {
        cout << "Base class constructor" << endl;
    }
};

class Derived1 : virtual public Base {
public:
    Derived1() {
        cout << "Derived1 class constructor" << endl;
    }
};

class Derived2 : virtual public Base {
public:
    Derived2() {
        cout << "Derived2 class constructor" << endl;
    }
};

class Final : public Derived1, public Derived2 {
public:
    Final() {
        cout << "Final class constructor" << endl;
    }
};

int main() {
    Final obj;  // Observe the order of constructor calls
    return 0;
}
