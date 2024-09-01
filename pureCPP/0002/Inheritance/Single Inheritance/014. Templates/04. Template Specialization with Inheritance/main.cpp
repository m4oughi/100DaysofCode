#include <iostream>
using namespace std;

// General template base class
template <typename T>
class Base {
public:
    void display() {
        cout << "Base class template general" << endl;
    }
};

// Template specialization for int
template <>
class Base<int> {
public:
    void display() {
        cout << "Base class template specialized for int" << endl;
    }
};

// Template derived class
template <typename T>
class Derived : public Base<T> {
public:
    void show() {
        this->display(); // Calls display() from Base
    }
};

int main() {
    Derived<double> obj1;
    obj1.show(); // Calls general template version
    
    Derived<int> obj2;
    obj2.show(); // Calls specialized version for int
    
    return 0;
}
