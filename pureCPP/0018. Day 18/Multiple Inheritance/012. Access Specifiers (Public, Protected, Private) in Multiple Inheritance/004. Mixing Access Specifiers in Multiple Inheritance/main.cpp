#include <iostream>
using namespace std;

class Base1 {
public:
    void showBase1() {
        cout << "Base1 public method" << endl;
    }
};

class Base2 {
protected:
    void showBase2() {
        cout << "Base2 protected method" << endl;
    }
};

class Base3 {
private:
    void showBase3() {
        cout << "Base3 private method" << endl;
    }

public:
    void callBase3() {
        showBase3();  // Public method calls private method
    }
};

class Derived : public Base1, protected Base2, private Base3 {
public:
    void display() {
        showBase1();  // Accessible
        showBase2();  // Accessible within Derived
        callBase3();  // Accessible, indirectly calls showBase3
    }
};

int main() {
    Derived d;
    d.showBase1();  // Accessible
    // d.showBase2();  // Error: Protected inheritance prevents direct access
    // d.showBase3();  // Error: Private inheritance prevents access
    d.display();  // Calls internal methods, some of which are protected/private
    return 0;
}
