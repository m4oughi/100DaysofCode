#include <iostream>
using namespace std;

class Base {
public:
    virtual ~Base() {
        cout << "Base destructor" << endl;
    }
};

class Derived1 : public Base {
public:
    ~Derived1() {
        cout << "Derived1 destructor" << endl;
    }
};

class Derived2 : public Base {
public:
    ~Derived2() {
        cout << "Derived2 destructor" << endl;
    }
};

int main() {
    Base* base1 = new Derived1();
    Base* base2 = new Derived2();

    delete base1;  // Calls Derived1's destructor and then Base's destructor
    delete base2;  // Calls Derived2's destructor and then Base's destructor

    return 0;
}
