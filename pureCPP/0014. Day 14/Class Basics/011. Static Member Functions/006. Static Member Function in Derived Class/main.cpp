#include <iostream>
using namespace std;

class Base {
public:
    static void show() {
        cout << "Static function in Base class." << endl;
    }
};

class Derived : public Base {
public:
    static void show() {
        cout << "Static function in Derived class." << endl;
    }
};

int main() {
    Base::show();
    Derived::show();  // Hides Base class static function

    return 0;
}
