#include <iostream>
using namespace std;

class Base {
public:
    virtual void show() {
        cout << "Base class show()" << endl;
    }
};

class Derived : public Base {
public:
    void show() final {  // Marking this function as final
        cout << "Derived class show()" << endl;
    }
};

int main() {
    Derived obj;
    obj.show();  // Calls Derived's show()
    return 0;
}
