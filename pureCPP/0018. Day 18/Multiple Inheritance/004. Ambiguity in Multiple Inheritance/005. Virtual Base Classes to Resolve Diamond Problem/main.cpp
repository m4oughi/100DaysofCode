#include <iostream>
using namespace std;

class Base {
public:
    void display() {
        cout << "Base Display" << endl;
    }
};

class Derived1 : virtual public Base {
    // Virtual inheritance from Base
};

class Derived2 : virtual public Base {
    // Virtual inheritance from Base
};

class FinalDerived : public Derived1, public Derived2 {
    // Inherits from both Derived1 and Derived2, no ambiguity due to virtual inheritance
};

int main() {
    FinalDerived obj;
    obj.display();  // No ambiguity, single instance of Base is shared
    return 0;
}
