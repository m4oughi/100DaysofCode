#include <iostream>
using namespace std;

class Base1 {
public:
    virtual void display() = 0;  // Pure virtual method
};

class Base2 {
public:
    virtual void display() = 0;  // Pure virtual method
};

class Derived : public Base1, public Base2 {
public:
    void display() override {
        cout << "Derived Display Implementation" << endl;
    }
};

int main() {
    Derived obj;
    obj.display();  // No ambiguity, derived class provides a single implementation
    return 0;
}
