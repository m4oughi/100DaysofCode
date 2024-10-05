#include <iostream>
using namespace std;

class Base1 {
public:
    Base1() {
        cout << "Base1 constructor called" << endl;
    }
    ~Base1() {
        cout << "Base1 destructor called" << endl;
    }
};

class Base2 {
public:
    Base2() {
        cout << "Base2 constructor called" << endl;
    }
    ~Base2() {
        cout << "Base2 destructor called" << endl;
    }
};

class Intermediate : public Base1, public Base2 {
public:
    Intermediate() {
        cout << "Intermediate constructor called" << endl;
    }
    ~Intermediate() {
        cout << "Intermediate destructor called" << endl;
    }
};

class Final : public Intermediate {
public:
    Final() {
        cout << "Final constructor called" << endl;
    }
    ~Final() {
        cout << "Final destructor called" << endl;
    }
};

int main() {
    Final f;
    return 0;
}
