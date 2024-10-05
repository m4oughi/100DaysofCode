#include <iostream>
using namespace std;

class Base1 {
public:
    void showBase1() {
        cout << "Base1 Show" << endl;
    }
};

class Base2 {
public:
    void showBase2() {
        cout << "Base2 Show" << endl;
    }
};

class Derived1 : virtual public Base1 {
public:
    void showDerived1() {
        cout << "Derived1 Show" << endl;
    }
};

class Derived2 : public Base2 {
public:
    void showDerived2() {
        cout << "Derived2 Show" << endl;
    }
};

class FinalDerived : public Derived1, public Derived2 {
public:
    void showFinal() {
        showBase1();   // Accessing Base1's method through Derived1
        showBase2();   // Accessing Base2's method through Derived2
        showDerived1();
        showDerived2();
        cout << "FinalDerived Show" << endl;
    }
};

int main() {
    FinalDerived obj;
    obj.showFinal();  // Calls all methods from base and derived classes
    return 0;
}
