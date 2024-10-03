#include <iostream>
using namespace std;

class MyClass {
    int x;
public:
    MyClass(int val) : x(val) {}

    MyClass* operator&() {
        cout << "Address-of operator overloaded" << endl;
        return this;
    }

    void display() const {
        cout << x << endl;
    }
};

int main() {
    MyClass obj(10);
    MyClass* ptr = &obj; // Will invoke overloaded address-of operator
    ptr->display();      // Output: 10
    return 0;
}
