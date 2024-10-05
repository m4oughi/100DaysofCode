#include <iostream>
using namespace std;

class Base1 {
public:
    virtual void action() = 0;  // Pure virtual function
};

class Base2 {
public:
    virtual void action() = 0;  // Pure virtual function
};

class Derived : public Base1, public Base2 {
public:
    void action() override {
        cout << "Derived class resolving ambiguity of action()" << endl;
    }
};

int main() {
    Derived obj;
    obj.action();  // Calls the resolved implementation
    return 0;
}
