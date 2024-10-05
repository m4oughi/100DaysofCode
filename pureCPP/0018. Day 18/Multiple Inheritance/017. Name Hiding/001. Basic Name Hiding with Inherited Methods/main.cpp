#include <iostream>
using namespace std;

class Base1 {
public:
    void display() {
        cout << "Display from Base1" << endl;
    }
};

class Derived : public Base1 {
public:
    void display() {
        cout << "Display from Derived" << endl;
    }
};

int main() {
    Derived d;
    d.display();  // Calls Derived's display, Base1's display is hidden
    return 0;
}
