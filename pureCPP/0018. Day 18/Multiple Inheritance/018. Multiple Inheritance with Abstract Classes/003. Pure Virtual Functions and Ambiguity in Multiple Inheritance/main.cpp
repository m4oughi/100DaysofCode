#include <iostream>
using namespace std;

class Abstract1 {
public:
    virtual void doSomething() = 0;
};

class Abstract2 {
public:
    virtual void doSomething() = 0;
};

class Derived : public Abstract1, public Abstract2 {
public:
    // Must implement the doSomething() function once to resolve ambiguity
    void doSomething() override {
        cout << "Doing something for both Abstract1 and Abstract2" << endl;
    }
};

int main() {
    Derived d;
    d.doSomething();  // Resolves ambiguity by implementing doSomething() once
    return 0;
}
