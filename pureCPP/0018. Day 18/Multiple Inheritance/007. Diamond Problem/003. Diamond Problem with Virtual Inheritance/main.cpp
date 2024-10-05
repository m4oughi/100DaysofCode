#include <iostream>
using namespace std;

class Grandparent {
public:
    void display() {
        cout << "Grandparent Display" << endl;
    }
};

class Parent1 : virtual public Grandparent {
    // Virtual inheritance prevents duplication of Grandparent in Child
};

class Parent2 : virtual public Grandparent {
    // Virtual inheritance prevents duplication of Grandparent in Child
};

class Child : public Parent1, public Parent2 {
    // No ambiguity, because there is only one instance of Grandparent
};

int main() {
    Child obj;
    obj.display();  // Calls Grandparent's display() with no ambiguity
    return 0;
}
