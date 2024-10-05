#include <iostream>
using namespace std;

class Base1 {
public:
    void display() {
        cout << "Base1 Display" << endl;
    }
};

class Base2 {
public:
    void display() {
        cout << "Base2 Display" << endl;
    }
};

class Derived : public Base1, public Base2 {
    // Inherits from both Base1 and Base2
};

int main() {
    Derived obj;
    // obj.display();  // Error: Ambiguity, compiler doesn't know which display() to call
    obj.Base1::display();  // Resolving ambiguity using scope resolution
    obj.Base2::display();  // Resolving ambiguity using scope resolution
    return 0;
}
