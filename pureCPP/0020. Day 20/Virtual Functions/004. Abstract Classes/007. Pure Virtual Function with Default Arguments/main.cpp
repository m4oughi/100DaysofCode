#include <iostream>
using namespace std;

class Base {
public:
    virtual void show(int x = 10) = 0; // Pure virtual function with default argument
};

class Derived : public Base {
public:
    void show(int x = 20) override {
        cout << "Derived class implementation of show() with x = " << x << endl;
    }
};

int main() {
    Base* basePtr = new Derived();
    basePtr->show();  // Uses Base's default argument (10)

    delete basePtr;
    return 0;
}
