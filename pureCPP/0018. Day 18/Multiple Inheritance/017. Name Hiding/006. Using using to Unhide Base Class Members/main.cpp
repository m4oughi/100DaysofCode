#include <iostream>
using namespace std;

class Base {
public:
    void print(int x) {
        cout << "Base print(int): " << x << endl;
    }

    void print(double y) {
        cout << "Base print(double): " << y << endl;
    }
};

class Derived : public Base {
public:
    using Base::print;  // Brings all Base::print overloads into Derived's scope

    void print(int x) {
        cout << "Derived print(int): " << x << endl;
    }
};

int main() {
    Derived d;
    d.print(10);     // Calls Derived's print(int)
    d.print(3.14);   // Calls Base's print(double)
    return 0;
}
