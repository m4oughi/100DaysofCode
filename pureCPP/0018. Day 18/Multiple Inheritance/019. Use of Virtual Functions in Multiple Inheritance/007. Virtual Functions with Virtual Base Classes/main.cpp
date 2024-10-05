#include <iostream>
using namespace std;

class Base {
public:
    virtual void execute() = 0;
};

class Derived1 : virtual public Base {
public:
    void execute() override {
        cout << "Execution in Derived1" << endl;
    }
};

class Derived2 : virtual public Base {
public:
    void execute() override {
        cout << "Execution in Derived2" << endl;
    }
};

class Final : public Derived1, public Derived2 {
public:
    void execute() override {
        Derived1::execute();  // Can call specific base class versions
        Derived2::execute();  // Resolves multiple inheritance ambiguity
        cout << "Execution in Final" << endl;
    }
};

int main() {
    Final f;
    f.execute();  // Calls Final's execute and also calls specific base versions
    return 0;
}
