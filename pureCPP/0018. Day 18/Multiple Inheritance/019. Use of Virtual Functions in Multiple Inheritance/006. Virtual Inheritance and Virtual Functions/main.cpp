#include <iostream>
using namespace std;

class Base {
public:
    virtual void show() {
        cout << "Show from Base" << endl;
    }
};

class Derived1 : virtual public Base {
public:
    void show() override {
        cout << "Show from Derived1" << endl;
    }
};

class Derived2 : virtual public Base {
public:
    void show() override {
        cout << "Show from Derived2" << endl;
    }
};

class Final : public Derived1, public Derived2 {
public:
    void show() override {
        cout << "Show from Final" << endl;
    }
};

int main() {
    Final f;
    f.show();  // Calls Final's show, resolving diamond problem
    return 0;
}
