#include <iostream>
using namespace std;

class MyClass {
public:
    int x;
    MyClass(int value) : x(value) {
        cout << "Object Created with Value: " << x << endl;
    }
};

int main() {
    MyClass* obj = new MyClass(50); // dynamically allocate memory for an object

    delete obj; // deallocate memory
    return 0;
}
