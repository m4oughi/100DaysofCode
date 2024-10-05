#include <iostream>
using namespace std;

class Base1 {
public:
    void display() {
        cout << "Display from Base1" << endl;
    }
};

class Base2 {
public:
    void display() {
        cout << "Display from Base2" << endl;
    }
};

class Derived : public Base1, public Base2 {
public:
    // No display() defined in Derived
};

int main() {
    Derived d;
    // d.display();  // Error: Ambiguity between Base1::display() and Base2::display()
    return 0;
}
