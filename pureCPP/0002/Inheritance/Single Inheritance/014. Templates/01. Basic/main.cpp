#include <iostream>
using namespace std;

// Template base class
template <typename T>
class Base {
public:
    T value;
    
    Base(T val) : value(val) { cout << "Base constructor called." << endl; }
    
    void show() {
        cout << "Base value: " << value << endl;
    }
};

// Template derived class
template <typename T>
class Derived : public Base<T> {
public:
    Derived(T val) : Base<T>(val) { cout << "Derived constructor called." << endl; }
    
    void display() {
        // Accessing base class's show() method
        this->show();
    }
};

int main() {
    Derived<int> obj(10);
    obj.display(); // Calls show() from Base
    
    return 0;
}
