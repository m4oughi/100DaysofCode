#include <iostream>
using namespace std;

class Base1 {
public:
    virtual void show() {
        cout << "Base1 class show()" << endl;
    }
};

class Base2 {
public:
    virtual void show() {
        cout << "Base2 class show()" << endl;
    }
};

class Derived : public Base1, public Base2 {
public:
    void show() override {  // Compiler error: ambiguous base classes
        cout << "Derived class show()" << endl;
    }
};

int main() {
    Derived obj;
    obj.show();  // Error: ambiguity between Base1::show() and Base2::show()
    return 0;
}
