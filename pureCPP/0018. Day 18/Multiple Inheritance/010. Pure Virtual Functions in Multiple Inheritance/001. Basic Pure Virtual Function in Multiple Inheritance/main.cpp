#include <iostream>
using namespace std;

class Base1 {
public:
    virtual void show() = 0;  // Pure virtual function
};

class Base2 {
public:
    virtual void display() = 0;  // Pure virtual function
};

class Derived : public Base1, public Base2 {
public:
    void show() override {
        cout << "Derived class implementing Base1's show()" << endl;
    }
    
    void display() override {
        cout << "Derived class implementing Base2's display()" << endl;
    }
};

int main() {
    Derived obj;
    obj.show();
    obj.display();
    return 0;
}
