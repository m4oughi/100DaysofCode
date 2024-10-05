#include <iostream>
using namespace std;

class Base {
public:
    int value;
    Base(int x) : value(x) {
        cout << "Base Constructor with value: " << value << endl;
    }
};

class Derived1 : virtual public Base {
public:
    Derived1(int x) : Base(x) {
        cout << "Derived1 Constructor" << endl;
    }
};

class Derived2 : virtual public Base {
public:
    Derived2(int x) : Base(x) {
        cout << "Derived2 Constructor" << endl;
    }
};

class FinalDerived : public Derived1, public Derived2 {
public:
    FinalDerived(int x) : Base(x), Derived1(x), Derived2(x) {
        cout << "FinalDerived Constructor" << endl;
    }
};

int main() {
    FinalDerived obj(50);
    return 0;
}
