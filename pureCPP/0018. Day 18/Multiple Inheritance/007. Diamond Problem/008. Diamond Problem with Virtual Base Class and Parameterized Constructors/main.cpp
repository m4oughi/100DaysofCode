#include <iostream>
using namespace std;

class Grandparent {
public:
    int value;
    Grandparent(int x) : value(x) {
        cout << "Grandparent Constructor: " << value << endl;
    }
};

class Parent1 : virtual public Grandparent {
public:
    Parent1(int x) : Grandparent(x) {
        cout << "Parent1 Constructor" << endl;
    }
};

class Parent2 : virtual public Grandparent {
public:
    Parent2(int x) : Grandparent(x) {
        cout << "Parent2 Constructor" << endl;
    }
};

class Child : public Parent1, public Parent2 {
public:
    Child(int x) : Grandparent(x), Parent1(x), Parent2(x) {
        cout << "Child Constructor" << endl;
    }
};

int main() {
    Child obj(50);  // Calls constructors in the order: Grandparent -> Parent1 -> Parent2 -> Child
    return 0;
}
