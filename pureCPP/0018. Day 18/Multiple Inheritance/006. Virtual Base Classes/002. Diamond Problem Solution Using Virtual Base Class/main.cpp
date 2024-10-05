#include <iostream>
using namespace std;

class Base {
public:
    void display() {
        cout << "Base Display" << endl;
    }
};

class Derived1 : virtual public Base {
    // Virtual inheritance to avoid duplication
};

class Derived2 : virtual public Base {
    // Virtual inheritance to avoid duplication
};

class FinalDerived : public Derived1, public Derived2 {
    // No ambiguity due to virtual inheritance
};

int main() {
    FinalDerived obj;
    obj.display();  // Calls Base's display() method with no ambiguity
    return 0;
}
