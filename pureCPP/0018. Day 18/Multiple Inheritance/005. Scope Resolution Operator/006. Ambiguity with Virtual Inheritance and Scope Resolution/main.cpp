#include <iostream>
using namespace std;

class Base {
public:
    void show() {
        cout << "Base Show" << endl;
    }
};

class Derived1 : virtual public Base {
public:
    void show() {
        cout << "Derived1 Show" << endl;
    }
};

class Derived2 : virtual public Base {
public:
    void show() {
        cout << "Derived2 Show" << endl;
    }
};

class FinalDerived : public Derived1, public Derived2 {
public:
    void display() {
        Derived1::show();  // Calls Derived1's show method
        Derived2::show();  // Calls Derived2's show method
        Base::show();      // Calls Base class show method, resolving ambiguity
    }
};

int main() {
    FinalDerived obj;
    obj.display();
    return 0;
}
