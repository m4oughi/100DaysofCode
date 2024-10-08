#include <iostream>
using namespace std;

class Base {
public:
    virtual ~Base() {
        cout << "Base class destructor" << endl;
    }
};

class Derived : public Base {
private:
    int* data;
public:
    Derived() {
        data = new int[10];  // Dynamically allocated resource
        cout << "Derived class constructor" << endl;
    }

    ~Derived() {
        delete[] data;  // Proper resource deallocation
        cout << "Derived class destructor" << endl;
    }
};

int main() {
    Base* obj = new Derived();
    delete obj;  // Properly calls Derived's destructor and releases the allocated memory
    return 0;
}
