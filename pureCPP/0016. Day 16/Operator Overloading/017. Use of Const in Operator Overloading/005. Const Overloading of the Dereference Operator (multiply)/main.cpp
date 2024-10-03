#include <iostream>
using namespace std;

class Resource {
    int value;
public:
    Resource(int v) : value(v) {}

    void display() const {
        cout << "Resource value: " << value << endl;
    }

    void setValue(int v) {
        value = v;
    }
};

class SmartPointer {
    Resource* ptr;
public:
    SmartPointer(Resource* p) : ptr(p) {}

    // Non-const dereference operator
    Resource& operator*() {
        return *ptr;
    }

    // Const dereference operator
    const Resource& operator*() const {
        return *ptr;
    }

    ~SmartPointer() {
        delete ptr;
    }
};

int main() {
    const SmartPointer sp1(new Resource(10));  // sp1 is const
    SmartPointer sp2(new Resource(20));

    (*sp1).display();  // Read-only access Output: Resource value: 10
    sp2->setValue(30);  // Modify value through non-const pointer
    (*sp2).display();   // Output: Resource value: 30

    return 0;
}
