#include <iostream>
using namespace std;

class Base {
public:
    int value;
    Base() : value(100) {}
};

class Derived1 : virtual public Base {
    // Virtual inheritance ensures that only one copy of Base exists
};

class Derived2 : virtual public Base {
    // Virtual inheritance ensures that only one copy of Base exists
};

class FinalDerived : public Derived1, public Derived2 {
public:
    void showValue() {
        cout << "Value: " << value << endl;  // No ambiguity due to virtual inheritance
    }
};

int main() {
    FinalDerived obj;
    obj.showValue();  // Accesses the single instance of Base's value
    return 0;
}
