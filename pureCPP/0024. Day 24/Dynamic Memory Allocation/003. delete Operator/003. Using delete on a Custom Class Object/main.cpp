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
    MyClass* obj = new MyClass; // dynamically allocate memory for an object

    delete obj; // deallocate memory, calling the destructor
    return 0;
}
