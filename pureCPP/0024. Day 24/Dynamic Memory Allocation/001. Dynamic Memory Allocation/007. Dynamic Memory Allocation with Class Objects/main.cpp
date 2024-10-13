#include <iostream>
using namespace std;

class MyClass {
public:
    int x;
    MyClass(int value) : x(value) {}
    void display() {
        cout << "Value: " << x << endl;
    }
};

int main() {
    MyClass* obj = new MyClass(10); // dynamically allocate memory for an object
    obj->display();

    delete obj; // deallocate memory
    return 0;
}
