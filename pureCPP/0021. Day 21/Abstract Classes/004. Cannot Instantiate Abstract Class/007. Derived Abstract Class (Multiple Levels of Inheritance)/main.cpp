#include <iostream>
using namespace std;

class Base {
public:
    virtual void doSomething() = 0;
};

class Intermediate : public Base {
    // No implementation for doSomething(), so Intermediate remains abstract
};

class Final : public Intermediate {
public:
    void doSomething() override {
        cout << "Doing something in the Final class!" << endl;
    }
};

int main() {
    // Intermediate inter;  // Error: cannot instantiate abstract class
    Final finalObj;
    finalObj.doSomething();  // Works fine since Final implements all pure virtual functions
    return 0;
}
