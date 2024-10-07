#include <iostream>
using namespace std;

class Base {
public:
    Base() {
        cout << "Base Constructor" << endl;
        show();  // Virtual function called inside constructor
    }

    virtual void show() {
        cout << "Base show" << endl;
    }
};

class Derived : public Base {
public:
    Derived() {
        cout << "Derived Constructor" << endl;
    }

    void show() override {
        cout << "Derived show" << endl;
    }
};

int main() {
    Derived d;  // Calls Base's show due to constructor behavior
    return 0;
}
