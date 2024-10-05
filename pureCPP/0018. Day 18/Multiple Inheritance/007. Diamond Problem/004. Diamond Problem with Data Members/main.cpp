#include <iostream>
using namespace std;

class Grandparent {
public:
    int value;
    Grandparent() : value(100) {}
};

class Parent1 : virtual public Grandparent {
    // Virtual inheritance ensures only one copy of value
};

class Parent2 : virtual public Grandparent {
    // Virtual inheritance ensures only one copy of value
};

class Child : public Parent1, public Parent2 {
public:
    void showValue() {
        cout << "Value: " << value << endl;  // No ambiguity due to virtual inheritance
    }
};

int main() {
    Child obj;
    obj.showValue();  // Accesses the single instance of value
    return 0;
}
