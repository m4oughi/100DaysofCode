#include <iostream>
using namespace std;

class Base {
public:
    int value;
    Base() : value(100) {}
};

class Derived1 : virtual public Base {
    // Virtual inheritance
};

class Derived2 : virtual public Base {
    // Virtual inheritance
};

class FinalDerived : public Derived1, public Derived2 {
public:
    void showValue() {
        cout << "FinalDerived Value: " << value << endl;  // No ambiguity due to virtual inheritance
    }
};

int main() {
    FinalDerived obj;
    obj.showValue();
    return 0;
}
