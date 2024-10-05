#include <iostream>
using namespace std;

class Base1 {
public:
    void show() {
        cout << "Base1 Show" << endl;
    }
};

class Base2 {
public:
    void show() {
        cout << "Base2 Show" << endl;
    }
};

class Derived : public Base1, public Base2 {
public:
    void display() {
        Base1::show();  // Resolving ambiguity using scope resolution
        Base2::show();  // Resolving ambiguity using scope resolution
    }
};

int main() {
    Derived obj;
    obj.display();
    return 0;
}
