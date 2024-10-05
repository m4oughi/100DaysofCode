#include <iostream>
using namespace std;

class Grandparent {
public:
    void display() {
        cout << "Grandparent Display" << endl;
    }
};

class Parent1 : public Grandparent {
    // Inherits display() from Grandparent
};

class Parent2 : public Grandparent {
    // Inherits display() from Grandparent
};

class Child : public Parent1, public Parent2 {
    // Inherits from both Parent1 and Parent2, causing ambiguity
};

int main() {
    Child obj;
    obj.Parent1::display();  // Resolving ambiguity using scope resolution
    obj.Parent2::display();  // Resolving ambiguity using scope resolution
    return 0;
}
