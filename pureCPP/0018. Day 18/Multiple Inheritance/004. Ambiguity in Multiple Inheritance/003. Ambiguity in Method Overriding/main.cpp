#include <iostream>
using namespace std;

class Base1 {
public:
    virtual void display() {
        cout << "Base1 Display" << endl;
    }
};

class Base2 {
public:
    virtual void display() {
        cout << "Base2 Display" << endl;
    }
};

class Derived : public Base1, public Base2 {
public:
    void display() override {
        cout << "Derived Display" << endl;
    }
};

int main() {
    Derived obj;
    obj.display();  // Calls Derived's display method, resolving ambiguity
    return 0;
}
