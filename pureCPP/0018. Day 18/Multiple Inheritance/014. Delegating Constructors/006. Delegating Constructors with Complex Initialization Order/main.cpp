#include <iostream>
using namespace std;

class Base1 {
public:
    int x;
    Base1(int a) : x(a) {
        cout << "Base1 constructor called with x = " << x << endl;
    }
};

class Base2 {
public:
    int y;
    Base2(int b) : y(b) {
        cout << "Base2 constructor called with y = " << y << endl;
    }
};

class Intermediate : public Base1, public Base2 {
public:
    Intermediate(int a, int b) : Base1(a), Base2(b) {
        cout << "Intermediate constructor called" << endl;
    }
};

class Final : public Intermediate {
public:
    int z;
    Final() : Final(1, 2, 3) {  // Delegating constructor
        cout << "Default Final constructor delegating to parameterized constructor" << endl;
    }

    Final(int a, int b, int c) : Intermediate(a, b), z(c) {
        cout << "Parameterized Final constructor called with z = " << z << endl;
    }
};

int main() {
    Final f;  // Calls default delegating constructor
    return 0;
}
