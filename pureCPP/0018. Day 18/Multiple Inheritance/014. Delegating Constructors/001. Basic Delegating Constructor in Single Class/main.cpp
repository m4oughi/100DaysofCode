#include <iostream>
using namespace std;

class Simple {
public:
    int x, y;

    Simple(int a, int b) : x(a), y(b) {
        cout << "Constructor with parameters called" << endl;
    }

    Simple() : Simple(0, 0) {  // Delegating to another constructor
        cout << "Default constructor delegating to parameterized constructor" << endl;
    }

    void show() {
        cout << "x: " << x << ", y: " << y << endl;
    }
};

int main() {
    Simple obj;  // Calls the default constructor, which delegates
    obj.show();  // x: 0, y: 0
    return 0;
}
