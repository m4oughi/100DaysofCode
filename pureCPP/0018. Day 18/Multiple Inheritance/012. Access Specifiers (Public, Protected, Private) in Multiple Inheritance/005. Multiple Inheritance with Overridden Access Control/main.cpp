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
    void expose() {
        showBase1();  // Can access protected members from Base1
        accessBase2();  // Can access public member of Base2
    }
};

int main() {
    Derived d;
    // d.showBase1();  // Error: Protected method cannot be accessed directly
    d.expose();  // Exposes Base1's protected and Base2's private method indirectly
    return 0;
}
