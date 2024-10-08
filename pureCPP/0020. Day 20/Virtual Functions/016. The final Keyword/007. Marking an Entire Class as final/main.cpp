#include <iostream>
using namespace std;

class Base {
public:
    virtual void show() {
        cout << "Base class show()" << endl;
    }
};

class FinalClass final : public Base {  // Class marked as final
public:
    void show() override {
        cout << "FinalClass class show()" << endl;
    }
};

// Compiler error: cannot inherit from a final class
class Derived : public FinalClass {
public:
    void show() override {
        cout << "Derived class show()" << endl;
    }
};

int main() {
    FinalClass obj;
    obj.show();  // Calls FinalClass's show()
    return 0;
}
