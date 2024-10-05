#include <iostream>
using namespace std;

class Base1 {
public:
    void show() {
        cout << "Base1 Show" << endl;
    }
};

class Base2 {
public:
    void show() {
        cout << "Base2 Show" << endl;
    }
};

class Derived : public Base1, public Base2 {
    // Derived class inherits from both Base1 and Base2
};

int main() {
    Derived obj;
    // obj.show();  // Error: Ambiguous call
    obj.Base1::show();  // Resolving ambiguity
    obj.Base2::show();  // Resolving ambiguity
    return 0;
}
