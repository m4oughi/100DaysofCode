#include <iostream>
using namespace std;

class Grandparent {
public:
    virtual void display() {
        cout << "Grandparent Display" << endl;
    }
};

class Parent1 : virtual public Grandparent {
public:
    void display() override {
        cout << "Parent1 Display" << endl;
    }
};

class Parent2 : virtual public Grandparent {
public:
    void display() override {
        cout << "Parent2 Display" << endl;
    }
};

class Child : public Parent1, public Parent2 {
public:
    void display() override {
        cout << "Child Display" << endl;
    }
};

int main() {
    Child obj;
    obj.display();  // Calls Child's display() method
    obj.Parent1::display();  // Calls Parent1's display() method
    obj.Parent2::display();  // Calls Parent2's display() method
    obj.Grandparent::display();  // Calls Grandparent's display() method
    return 0;
}
