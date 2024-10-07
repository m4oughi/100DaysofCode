#include <iostream>
using namespace std;

class Base {
public:
    virtual void show() {
        cout << "Base show" << endl;
    }
};

class Derived : public Base {
public:
    void show() final {  // Prevents further overriding
        cout << "Derived show" << endl;
    }
};

class AnotherDerived : public Derived {
    // void show() override { }  // Error: cannot override final function
};

int main() {
    Derived d;
    d.show();  // Calls Derived's show

    return 0;
}
