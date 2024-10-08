#include <iostream>
#include <memory>
using namespace std;

class Base {
public:
    virtual ~Base() {
        cout << "Base class destructor" << endl;
    }
};

class Derived : public Base {
public:
    ~Derived() {
        cout << "Derived class destructor" << endl;
    }
};

int main() {
    unique_ptr<Base> obj = make_unique<Derived>();
    // No need to explicitly delete, unique_ptr automatically calls the destructor
    return 0;
}
