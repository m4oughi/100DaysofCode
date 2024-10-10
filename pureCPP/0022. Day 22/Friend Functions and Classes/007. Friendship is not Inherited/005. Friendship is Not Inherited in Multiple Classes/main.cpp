#include <iostream>
using namespace std;

class Base {
private:
    int baseValue;

public:
    Base(int val) : baseValue(val) {}

    // Friend function for Base class
    friend void showBase(Base&);
};

class Derived1 : public Base {
private:
    int derived1Value;

public:
    Derived1(int baseVal, int d1Val) : Base(baseVal), derived1Value(d1Val) {}
};

class Derived2 : public Base {
private:
    int derived2Value;

public:
    Derived2(int baseVal, int d2Val) : Base(baseVal), derived2Value(d2Val) {}
};

// Friend function accessing private member of Base class
void showBase(Base& b) {
    cout << "Base Value: " << b.baseValue << endl;
}

int main() {
    Base baseObj(100);
    Derived1 d1(200, 300);
    Derived2 d2(400, 500);

    showBase(baseObj);  // Accesses Base private member
    // showBase(d1);  // Error: Friendship is not inherited by Derived1
    // showBase(d2);  // Error: Friendship is not inherited by Derived2

    return 0;
}
