#include <iostream>
using namespace std;

class Grandparent {
private:
    int grandparentValue;

public:
    Grandparent(int val) : grandparentValue(val) {}

    // Friend function for Grandparent class
    friend void showGrandparent(Grandparent&);
};

class Parent : public Grandparent {
private:
    int parentValue;

public:
    Parent(int gVal, int pVal) : Grandparent(gVal), parentValue(pVal) {}
};

class Child : public Parent {
private:
    int childValue;

public:
    Child(int gVal, int pVal, int cVal) : Parent(gVal, pVal), childValue(cVal) {}

    // Friend function for Child class
    friend void showChild(Child&);
};

// Friend function for Grandparent class
void showGrandparent(Grandparent& g) {
    cout << "Grandparent Value: " << g.grandparentValue << endl;
}

// Friend function for Child class
void showChild(Child& c) {
    // showGrandparent(c);  // Error: Child is not a friend of Grandparent
    cout << "Child Value: " << c.childValue << endl;
}

int main() {
    Child child(10, 20, 30);
    showChild(child);  // Only Child's member is accessed
    return 0;
}
