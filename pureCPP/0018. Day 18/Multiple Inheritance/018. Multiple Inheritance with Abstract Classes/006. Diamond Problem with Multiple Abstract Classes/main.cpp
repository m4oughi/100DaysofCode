#include <iostream>
using namespace std;

class Abstract1 {
public:
    virtual void doSomething() = 0;
};

class Abstract2 : virtual public Abstract1 {
public:
    virtual void doSomething() override = 0;
};

class Abstract3 : virtual public Abstract1 {
public:
    virtual void doSomething() override = 0;
};

class Final : public Abstract2, public Abstract3 {
public:
    void doSomething() override {
        cout << "Final implementation of doSomething()" << endl;
    }
};

int main() {
    Final f;
    f.doSomething();  // Resolves diamond problem, only one doSomething() to implement
    return 0;
}
