#include <iostream>
using namespace std;

class Grandparent {
public:
    Grandparent() {
        cout << "Grandparent Constructor" << endl;
    }
};

class Parent1 : virtual public Grandparent {
public:
    Parent1() {
        cout << "Parent1 Constructor" << endl;
    }
};

class Parent2 : virtual public Grandparent {
public:
    Parent2() {
        cout << "Parent2 Constructor" << endl;
    }
};

class Child : public Parent1, public Parent2 {
public:
    Child() {
        cout << "Child Constructor" << endl;
    }
};

int main() {
    Child obj;
    return 0;
}
