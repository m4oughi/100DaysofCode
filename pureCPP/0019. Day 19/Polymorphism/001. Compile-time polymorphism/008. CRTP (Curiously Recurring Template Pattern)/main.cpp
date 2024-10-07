#include <iostream>
using namespace std;

template <typename Derived>
class Base {
public:
    void interface() {
        static_cast<Derived*>(this)->implementation();
    }
};

class Derived1 : public Base<Derived1> {
public:
    void implementation() {
        cout << "Implementation of Derived1" << endl;
    }
};

class Derived2 : public Base<Derived2> {
public:
    void implementation() {
        cout << "Implementation of Derived2" << endl;
    }
};

int main() {
    Derived1 d1;
    Derived2 d2;

    d1.interface();
    d2.interface();

    return 0;
}
