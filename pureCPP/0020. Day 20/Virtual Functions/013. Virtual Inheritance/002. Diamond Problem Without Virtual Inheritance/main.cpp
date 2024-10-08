#include <iostream>
using namespace std;

class Base {
public:
    void show() {
        cout << "Base class show()" << endl;
    }
};

class Derived1 : public Base {
};

class Derived2 : public Base {
};

class Final : public Derived1, public Derived2 {
};

int main() {
    Final obj;
    // obj.show();  // Error: ambiguous call to show() due to multiple Base class instances
    return 0;
}
