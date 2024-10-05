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

class Derived1 : public Base1 {
public:
    void display() {
        cout << "Display from Derived1" << endl;
    }
};

class Derived2 : public Base2 {
public:
    void display() {
        cout << "Display from Derived2" << endl;
    }
};

class Final : public Derived1, public Derived2 {
public:
    void show() {
        Derived1::display();  // Calls Derived1's display
        Derived2::display();  // Calls Derived2's display
    }
};

int main() {
    Final f;
    f.show();
    return 0;
}
