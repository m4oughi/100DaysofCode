#include <iostream>
using namespace std;

class Base {
public:
    virtual ~Base() {
        cout << "Base class destructor called." << endl;
    }
    virtual void show() = 0;  // Pure virtual function
};

class Derived : public Base {
public:
    ~Derived() {
        cout << "Derived class destructor called." << endl;
    }
    void show() override {
        cout << "Derived class show() function called." << endl;
    }
};

int main() {
    Base* ptr = new Derived();
    ptr->show();  // Outputs "Derived class show() function called."
    
    delete ptr;  // Proper cleanup with virtual destructors, outputs both "Derived class destructor called." and "Base class destructor called."
    return 0;
}
