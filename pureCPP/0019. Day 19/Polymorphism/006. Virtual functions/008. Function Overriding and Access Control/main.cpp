#include <iostream>
using namespace std;

class Base {
protected:
    virtual void display() {  // Protected virtual function
        cout << "Base display" << endl;
    }

public:
    void callDisplay() {
        display();  // Calls the appropriate display function
    }
};

class Derived : public Base {
protected:
    void display() override {  // Overrides the base class display function
        cout << "Derived display" << endl;
    }
};

int main() {
    Derived d;
    d.callDisplay();  // Calls Derived's display function through Base's callDisplay
    return 0;
}
