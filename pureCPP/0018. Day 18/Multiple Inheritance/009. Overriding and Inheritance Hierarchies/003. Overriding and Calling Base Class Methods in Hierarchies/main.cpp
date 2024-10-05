#include <iostream>
using namespace std;

class Base1 {
public:
    virtual void show() {
        cout << "Show from Base1" << endl;
    }
};

class Base2 {
public:
    virtual void show() {
        cout << "Show from Base2" << endl;
    }
};

class Derived : public Base1, public Base2 {
public:
    void show() override {
        cout << "Show from Derived" << endl;
        Base1::show();  // Calling Base1's show
        Base2::show();  // Calling Base2's show
    }
};

int main() {
    Derived d;
    d.show();  // Calls Derived's show and then Base1's and Base2's show
    return 0;
}
