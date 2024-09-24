#include <iostream>
using namespace std;

class Base {
public:
    void show(int x) {
        cout << "Base show with int: " << x << endl;
    }

    virtual void display() {
        cout << "Base display" << endl;
    }
};

class Derived : public Base {
public:
    void show(double x) {
        cout << "Derived show with double: " << x << endl;
    }

    void display() override {
        cout << "Derived display" << endl;
    }
};

int main() {
    Base* basePtr = new Derived();

    basePtr->display();   // Calls Derived's display (overriding)
    basePtr->show(5);     // Calls Base's show(int) (overloading not applicable here)
    return 0;
}
