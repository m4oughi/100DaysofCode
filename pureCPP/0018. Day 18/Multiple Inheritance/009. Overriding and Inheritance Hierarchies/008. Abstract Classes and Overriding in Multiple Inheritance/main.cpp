#include <iostream>
using namespace std;

class Abstract1 {
public:
    virtual void action1() = 0;  // Pure virtual function
};

class Abstract2 {
public:
    virtual void action2() = 0;  // Pure virtual function
};

class Derived : public Abstract1, public Abstract2 {
public:
    void action1() override {
        cout << "Action1 implemented in Derived" << endl;
    }
    
    void action2() override {
        cout << "Action2 implemented in Derived" << endl;
    }
};

int main() {
    Derived d;
    d.action1();  // Calls Derived's action1
    d.action2();  // Calls Derived's action2
    return 0;
}
