#include <iostream>
using namespace std;

class Base1 {
public:
    int value1;
    Base1(int v1) : value1(v1) {
        cout << "Base1 constructor called with value1 = " << value1 << endl;
    }
    ~Base1() {
        cout << "Base1 destructor called" << endl;
    }
};

class Base2 {
public:
    int value2;
    Base2(int v2) : value2(v2) {
        cout << "Base2 constructor called with value2 = " << value2 << endl;
    }
    ~Base2() {
        cout << "Base2 destructor called" << endl;
    }
};

class Derived1 : virtual public Base1, virtual public Base2 {
public:
    Derived1(int v1, int v2) : Base1(v1), Base2(v2) {
        cout << "Derived1 constructor called" << endl;
    }
    ~Derived1() {
        cout << "Derived1 destructor called" << endl;
    }
};

class Derived2 : virtual public Base1, virtual public Base2 {
public:
    Derived2(int v1, int v2) : Base1(v1), Base2(v2) {
        cout << "Derived2 constructor called" << endl;
    }
    ~Derived2() {
        cout << "Derived2 destructor called" << endl;
    }
};

class Final : public Derived1, public Derived2 {
public:
    Final(int v1, int v2) : Base1(v1), Base2(v2), Derived1(v1, v2), Derived2(v1, v2) {
        cout << "Final constructor called" << endl;
    }
    ~Final() {
        cout << "Final destructor called" << endl;
    }

    void printValues() {
        cout << "Value from Base1: " << value1 << endl;
        cout << "Value from Base2: " << value2 << endl;
    }
};

int main() {
    Final f(100, 200);
    f.printValues();  // Accessing values from virtual base classes
    return 0;
}
