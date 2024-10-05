#include <iostream>
using namespace std;

class Base1 {
protected:
    int x;

public:
    Base1(int a) : x(a) {}
    void displayX() {
        cout << "Base1 x: " << x << endl;
    }
};

class Base2 {
private:
    int y;

public:
    Base2(int b) : y(b) {}
    void displayY() {
        cout << "Base2 y: " << y << endl;
    }
};

class Derived : public Base1, public Base2 {
public:
    Derived(int a, int b) : Base1(a), Base2(b) {}
    void showValues() {
        displayX();  // Accessing protected member from Base1
        displayY();  // Accessing private member through public function
    }
};

int main() {
    Derived obj(5, 10);
    obj.showValues();
    return 0;
}
