#include <iostream>
using namespace std;

class Base {
public:
    void show(int a) {
        cout << "Base class, int: " << a << endl;
    }

    void show(double b) {
        cout << "Base class, double: " << b << endl;
    }
};

class Derived : public Base {
public:
    void show(char c) {
        cout << "Derived class, char: " << c << endl;
    }
};

int main() {
    Derived obj;
    obj.show(10);      // Calls Base::show(int)
    obj.show(5.5);     // Calls Base::show(double)
    obj.show('A');     // Calls Derived::show(char)
    
    return 0;
}
