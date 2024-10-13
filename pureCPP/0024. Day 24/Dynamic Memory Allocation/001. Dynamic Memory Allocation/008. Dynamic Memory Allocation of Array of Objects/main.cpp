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
    int size = 3;
    MyClass* objArray = new MyClass[size]{{1}, {2}, {3}}; // dynamic allocation of array of objects

    for (int i = 0; i < size; i++) {
        objArray[i].display();
    }

    delete[] objArray; // deallocate array of objects
    return 0;
}
