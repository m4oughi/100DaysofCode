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
    int size = 3;
    MyClass* objArray = new MyClass[size]{{10}, {20}, {30}}; // dynamically allocate array of objects

    delete[] objArray; // deallocate memory
    return 0;
}
