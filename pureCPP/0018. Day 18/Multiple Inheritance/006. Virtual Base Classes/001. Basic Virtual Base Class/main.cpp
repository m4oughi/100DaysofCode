#include <iostream>
using namespace std;

class Base {
public:
    void display() {
        cout << "Base Display" << endl;
    }
};

class Derived1 : virtual public Base {
    // Virtual inheritance prevents duplication of Base in further derived classes
};

class Derived2 : virtual public Base {
    // Virtual inheritance prevents duplication of Base in further derived classes
};

class FinalDerived : public Derived1, public Derived2 {
    // Derived1 and Derived2 both share a single instance of Base
};

int main() {
    FinalDerived obj;
    obj.display();  // Calls Base's display() without ambiguity
    return 0;
}
