#include <iostream>
using namespace std;

class Resource {
    int value;
public:
    Resource(int v) : value(v) {}

    void display() const {
        cout << "Resource value: " << value << endl;
    }
};

class SmartPointer {
    Resource* ptr;
public:
    SmartPointer(Resource* p) : ptr(p) {}

    // Overloading the * operator (dereference)
    Resource& operator*() {
        return *ptr;
    }

    // Overloading the -> operator
    Resource* operator->() {
        return ptr;
    }

    ~SmartPointer() {
        delete ptr;
    }
};

int main() {
    SmartPointer sp(new Resource(10));
    (*sp).display();  // Output: Resource value: 10
    sp->display();    // Output: Resource value: 10
    return 0;
}
