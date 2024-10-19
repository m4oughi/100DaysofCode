#include <iostream>
using namespace std;

class Grandparent {
public:
    virtual void display() {
        cout << "Grandparent class." << endl;
    }
};

class Parent : public Grandparent {
public:
    void display() override {
        cout << "Parent class." << endl;
    }
};

class Child : public Parent {
public:
    void display() override {
        cout << "Child class." << endl;
    }
};

int main() {
    Child* child = new Child();
    Parent* parent = static_cast<Parent*>(child);  // Cast Child* to Parent*
    Grandparent* grandparent = static_cast<Grandparent*>(parent);  // Cast Parent* to Grandparent*
    
    grandparent->display();  // Will call Child's display method due to virtual functions

    delete child;
    return 0;
}
