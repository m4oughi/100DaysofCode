#include <iostream>
using namespace std;

class Base {
public:
    void show() {
        cout << "Base class show()" << endl;
    }
};

class Derived1 : virtual public Base {
};

class Derived2 : virtual public Base {
};

class Final : public Derived1, public Derived2 {
};

int main() {
    Final obj;
    obj.show();  // No ambiguity, only one Base class instance
    return 0;
}
