#include <iostream>
using namespace std;

class Base {
public:
    void show() {
        cout << "Base class function." << endl;
    }
};

class Derived : public Base {};

int main() {
    Derived d;
    Base b = d;  // Implicit conversion from Derived to Base
    b.show();
    return 0;
}
