#include <iostream>
using namespace std;

class Base1 {
public:
    virtual void doWork() = 0;  // Pure virtual function
};

class Base2 {
public:
    virtual void doWork() = 0;  // Pure virtual function
};

class Derived : public Base1, public Base2 {
public:
    void doWork() override {
        cout << "Doing work in Derived" << endl;
    }
};

int main() {
    Derived d;
    d.doWork();  // Implements pure virtual function from both bases
    return 0;
}
