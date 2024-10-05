#include <iostream>
using namespace std;

class Base1 {
public:
    Base1() {
        cout << "Base1 Constructor" << endl;
    }
};

class Base2 {
public:
    Base2() {
        cout << "Base2 Constructor" << endl;
    }
};

class Derived : public Base1, public Base2 {
    // Derived class that will automatically call base class constructors
public:
    Derived() {
        cout << "Derived Constructor" << endl;
    }
};

int main() {
    Derived obj;
    return 0;
}
