#include <iostream>
using namespace std;

class Base1 {
public:
    virtual ~Base1() = 0;  // Pure virtual destructor
};

Base1::~Base1() {
    cout << "Base1 pure virtual destructor called" << endl;
}

class Base2 {
public:
    virtual ~Base2() = 0;  // Pure virtual destructor
};

Base2::~Base2() {
    cout << "Base2 pure virtual destructor called" << endl;
}

class Derived : public Base1, public Base2 {
public:
    ~Derived() override {
        cout << "Derived class destructor called" << endl;
    }
};

int main() {
    Derived* obj = new Derived();
    delete obj;  // Calls destructors in correct order
    return 0;
}
