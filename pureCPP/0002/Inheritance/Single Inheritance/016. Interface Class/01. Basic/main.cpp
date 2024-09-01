#include <iostream>
using namespace std;

// Interface class
class Interface {
public:
    virtual void doSomething() const = 0; // Pure virtual function
    virtual ~Interface() {} // Virtual destructor
};

// Derived class implementing the interface
class Implementation : public Interface {
public:
    void doSomething() const override {
        cout << "Implementation doing something." << endl;
    }
};

int main() {
    Implementation impl;
    impl.doSomething(); // Calls implemented method

    return 0;
}
