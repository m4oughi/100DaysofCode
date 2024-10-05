#include <iostream>
using namespace std;

class Abstract1 {
public:
    virtual void doSomething1() = 0;
    virtual ~Abstract1() = 0;  // Pure virtual destructor
};

Abstract1::~Abstract1() {
    cout << "Abstract1 destructor called" << endl;
}

class Abstract2 {
public:
    virtual void doSomething2() = 0;
    virtual ~Abstract2() = 0;  // Pure virtual destructor
};

Abstract2::~Abstract2() {
    cout << "Abstract2 destructor called" << endl;
}

class Derived : public Abstract1, public Abstract2 {
public:
    void doSomething1() override {
        cout << "Doing something from Abstract1" << endl;
    }

    void doSomething2() override {
        cout << "Doing something from Abstract2" << endl;
    }

    ~Derived() {
        cout << "Derived destructor called" << endl;
    }
};

int main() {
    Abstract1* obj = new Derived();
    obj->doSomething1();
    delete obj;  // Calls destructors for Derived and Abstract1
    return 0;
}
