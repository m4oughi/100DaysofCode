#include <iostream>
using namespace std;

class MyClass {
public:
    MyClass() {
        cout << "Constructor called." << endl;
    }
    ~MyClass() {
        cout << "Destructor called." << endl;
    }
};

int main() {
    int size = 3;
    MyClass* objArray = new MyClass[size]; // dynamically allocate array of objects

    delete[] objArray; // deallocate memory for the array of objects, calling destructors
    return 0;
}
