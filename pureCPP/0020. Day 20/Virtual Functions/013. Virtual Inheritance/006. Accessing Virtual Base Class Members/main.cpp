#include <iostream>
using namespace std;

class Base {
protected:
    int value;
public:
    Base() : value(100) {}
};

class Derived1 : virtual public Base {
public:
    void setValue(int v) {
        value = v;
    }
};

class Derived2 : virtual public Base {
public:
    void showValue() {
        cout << "Value: " << value << endl;
    }
};

class Final : public Derived1, public Derived2 {
};

int main() {
    Final obj;
    obj.setValue(200);  // Set value through Derived1
    obj.showValue();    // Access value through Derived2
    return 0;
}
