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
public:
    void display() {
        cout << "Derived Display" << endl;
    }
    
    void callBaseDisplay() {
        Base1::display();  // Calling Base1's version of display
        Base2::display();  // Calling Base2's version of display
    }
};

int main() {
    Derived obj;
    obj.display();  // Calls Derived's display
    obj.callBaseDisplay();  // Calls display() from Base1 and Base2 using scope resolution
    return 0;
}
