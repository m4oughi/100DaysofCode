#include <iostream>
using namespace std;

class Base {
public:
    Base() {
        cout << "Base class constructor" << endl;
    }
};

class Intermediate1 : virtual public Base {
public:
    Intermediate1() {
        cout << "Intermediate1 class constructor" << endl;
    }
};

class Intermediate2 : virtual public Base {
public:
    Intermediate2() {
        cout << "Intermediate2 class constructor" << endl;
    }
};

class Final : public Intermediate1, public Intermediate2 {
public:
    Final() {
        cout << "Final class constructor" << endl;
    }
};

int main() {
    Final obj;  // Observe the order of constructor calls
    return 0;
}
