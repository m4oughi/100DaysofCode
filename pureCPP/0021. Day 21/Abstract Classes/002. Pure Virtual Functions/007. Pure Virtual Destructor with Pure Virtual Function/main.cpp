#include <iostream>
using namespace std;

class AbstractClass {
public:
    virtual void doSomething() = 0;
    // Pure virtual destructor
    virtual ~AbstractClass() = 0;
};

AbstractClass::~AbstractClass() {
    cout << "AbstractClass destroyed." << endl;
}

class ConcreteClass : public AbstractClass {
public:
    void doSomething() override {
        cout << "Doing something!" << endl;
    }
    ~ConcreteClass() {
        cout << "ConcreteClass destroyed." << endl;
    }
};

int main() {
    AbstractClass* obj = new ConcreteClass();
    obj->doSomething();
    delete obj;  // Virtual destructor called
    return 0;
}
