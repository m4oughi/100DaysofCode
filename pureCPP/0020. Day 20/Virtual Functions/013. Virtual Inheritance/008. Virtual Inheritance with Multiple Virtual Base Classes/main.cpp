#include <iostream>
using namespace std;

class Base1 {
public:
    Base1() {
        cout << "Base1 constructor" << endl;
    }
};

class Base2 {
public:
    Base2() {
        cout << "Base2 constructor" << endl;
    }
};

class Derived1 : virtual public Base1, virtual public Base2 {
public:
    Derived1() {
        cout << "Derived1 constructor" << endl;
    }
};

class Final : public Derived1 {
public:
    Final() {
        cout << "Final constructor" << endl;
    }
};

int main() {
    Final obj;  // Observe the order of constructor calls
    return 0;
}
