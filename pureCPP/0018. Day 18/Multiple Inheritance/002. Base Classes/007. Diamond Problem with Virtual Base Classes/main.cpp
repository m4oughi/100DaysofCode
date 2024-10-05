#include <iostream>
using namespace std;

class Base {
public:
    Base() {
        cout << "Base Constructor" << endl;
    }
};

class Derived1 : virtual public Base {
public:
    Derived1() {
        cout << "Derived1 Constructor" << endl;
    }
};

class Derived2 : virtual public Base {
public:
    Derived2() {
        cout << "Derived2 Constructor" << endl;
    }
};

class FinalDerived : public Derived1, public Derived2 {
public:
    FinalDerived() {
        cout << "FinalDerived Constructor" << endl;
    }
};

int main() {
    FinalDerived obj;
    return 0;
}
