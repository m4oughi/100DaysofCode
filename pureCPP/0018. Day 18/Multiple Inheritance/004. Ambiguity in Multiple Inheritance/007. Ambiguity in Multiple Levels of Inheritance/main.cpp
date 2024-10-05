#include <iostream>
using namespace std;

class Base1 {
public:
    void print() {
        cout << "Base1 Print" << endl;
    }
};

class Base2 {
public:
    void print() {
        cout << "Base2 Print" << endl;
    }
};

class Intermediate1 : public Base1 {
    // Inherits from Base1
};

class Intermediate2 : public Base2 {
    // Inherits from Base2
};

class Derived : public Intermediate1, public Intermediate2 {
public:
    void display() {
        Intermediate1::print();  // Resolving ambiguity from Intermediate1's Base1
        Intermediate2::print();  // Resolving ambiguity from Intermediate2's Base2
    }
};

int main() {
    Derived obj;
    obj.display();
    return 0;
}
