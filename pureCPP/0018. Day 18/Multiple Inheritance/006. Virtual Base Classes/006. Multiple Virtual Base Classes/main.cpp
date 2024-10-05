#include <iostream>
using namespace std;

class Base1 {
public:
    void displayBase1() {
        cout << "Base1 Display" << endl;
    }
};

class Base2 {
public:
    void displayBase2() {
        cout << "Base2 Display" << endl;
    }
};

class Derived1 : virtual public Base1, virtual public Base2 {
    // Inherits from both Base1 and Base2 using virtual inheritance
};

class Derived2 : virtual public Base1, virtual public Base2 {
    // Inherits from both Base1 and Base2 using virtual inheritance
};

class FinalDerived : public Derived1, public Derived2 {
public:
    void displayAll() {
        displayBase1();  // Calls Base1's method
        displayBase2();  // Calls Base2's method
    }
};

int main() {
    FinalDerived obj;
    obj.displayAll();  // Calls both displayBase1() and displayBase2()
    return 0;
}
