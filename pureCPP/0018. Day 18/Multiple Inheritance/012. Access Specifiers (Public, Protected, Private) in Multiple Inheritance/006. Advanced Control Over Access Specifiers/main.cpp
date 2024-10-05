#include <iostream>
using namespace std;

class Base1 {
protected:
    void showBase1() {
        cout << "Base1 protected method" << endl;
    }
};

class Base2 {
private:
    void showBase2() {
        cout << "Base2 private method" << endl;
    }

public:
    void accessBase2() {
        showBase2();  // Public method accessing private method
    }
};

class Derived : public Base1, public Base2 {
public:
    using Base1::showBase1;  // Expose Base1's protected method as public

    void display() {
        showBase1();  // Now accessible as public
        accessBase2();  // Access public method of Base2
    }
};

int main() {
    Derived d;
    d.showBase1();  // Accessible due to the 'using' declaration
    d.display();  // Calls internal methods
    return 0;
}
