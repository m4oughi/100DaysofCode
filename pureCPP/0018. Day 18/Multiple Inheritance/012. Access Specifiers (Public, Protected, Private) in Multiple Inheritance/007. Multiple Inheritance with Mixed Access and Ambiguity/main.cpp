#include <iostream>
using namespace std;

class Base1 {
protected:
    void show() {
        cout << "Base1 protected show method" << endl;
    }
};

class Base2 {
public:
    void show() {
        cout << "Base2 public show method" << endl;
    }
};

class Derived : public Base1, public Base2 {
public:
    void display() {
        Base1::show();  // Calls Base1's protected show method
        Base2::show();  // Calls Base2's public show method
    }
};

int main() {
    Derived d;
    d.display();  // Calls both Base1 and Base2 show methods
    return 0;
}
