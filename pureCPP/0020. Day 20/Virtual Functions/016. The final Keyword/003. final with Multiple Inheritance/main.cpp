#include <iostream>
using namespace std;

class Base1 {
public:
    virtual void display() {
        cout << "Base1 class display()" << endl;
    }
};

class Base2 {
public:
    virtual void display() {
        cout << "Base2 class display()" << endl;
    }
};

class Derived : public Base1, public Base2 {
public:
    void display() final {  // Final implementation of display
        cout << "Derived class display()" << endl;
    }
};

int main() {
    Derived obj;
    obj.display();  // Calls Derived's final implementation of display()
    return 0;
}
