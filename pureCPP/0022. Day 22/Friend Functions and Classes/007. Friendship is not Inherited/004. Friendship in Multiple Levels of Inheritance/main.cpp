#include <iostream>
using namespace std;

class Grandparent {
private:
    int grandparentValue;

public:
    Grandparent(int val) : grandparentValue(val) {}

    // Friend function for Grandparent
    friend void showGrandparent(Grandparent&);
};

class Parent : public Grandparent {
private:
    int parentValue;

public:
    Parent(int gval, int pval) : Grandparent(gval), parentValue(pval) {}

    // No friendship declared for Parent class
};

class Child : public Parent {
private:
    int childValue;

public:
    Child(int gval, int pval, int cval) : Parent(gval, pval), childValue(cval) {}

    // Friend function for Child class
    friend void showChild(Child&);
};

// Friend function for Grandparent class
void showGrandparent(Grandparent& gp) {
    cout << "Grandparent Value: " << gp.grandparentValue << endl;
}

// Friend function for Child class
void showChild(Child& c) {
    showGrandparent(c);  // Accessing Grandparent's private member
    // cout << "Parent Value: " << c.parentValue << endl;  // Error: No friendship for Parent class
    cout << "Child Value: " << c.childValue << endl;
}

int main() {
    Child child(100, 200, 300);
    showChild(child);  // Accesses Grandparent and Child members, but not Parent
    return 0;
}
