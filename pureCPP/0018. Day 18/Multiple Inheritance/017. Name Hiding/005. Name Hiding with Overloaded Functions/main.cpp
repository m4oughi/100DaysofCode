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
    void print(int x) {
        cout << "Derived print(int): " << x << endl;
    }
};

int main() {
    Derived d;
    d.print(10);  // Calls Derived's print(int)
    // d.print(3.14);  // Error: Base's print(double) is hidden by Derived's print(int)
    return 0;
}
