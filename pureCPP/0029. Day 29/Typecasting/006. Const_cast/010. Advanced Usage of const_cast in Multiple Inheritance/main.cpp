#include <iostream>
using namespace std;

class Base1 {
public:
    virtual void show() const {
        cout << "Base1 show." << endl;
    }
};

class Base2 {
public:
    virtual void display() const {
        cout << "Base2 display." << endl;
    }
};

class Derived : public Base1, public Base2 {
    int data;
public:
    Derived(int d) : data(d) {}

    void modifyData() const {
        const_cast<Derived*>(this)->data = 50;  // Modify data in const method
    }

    void showData() const {
        cout << "Data: " << data << endl;
    }
};

int main() {
    const Derived d(25);
    d.modifyData();  // Modifies data in const object
    d.showData();    // Show modified data

    return 0;
}
