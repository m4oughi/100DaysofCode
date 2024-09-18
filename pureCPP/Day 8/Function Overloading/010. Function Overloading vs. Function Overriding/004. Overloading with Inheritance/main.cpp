#include <iostream>
using namespace std;

class Base {
public:
    void show(int x) {
        cout << "Base show with int: " << x << endl;
    }
};

class Derived : public Base {
public:
    void show(double x) {
        cout << "Derived show with double: " << x << endl;
    }
};

int main() {
    Derived d;
    d.show(5);       // Calls Base::show(int) (inherited)
    d.show(5.5);     // Calls Derived::show(double)
    return 0;
}
