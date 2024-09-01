#include <iostream>
using namespace std;

// Template base class with a member function
template <typename T>
class Base {
public:
    T value;
    
    Base(T val) : value(val) { cout << "Base constructor called." << endl; }
    
    void show() {
        cout << "Base value: " << value << endl;
    }
    
    // Template member function
    template <typename U>
    void print(U msg) {
        cout << msg << ": " << value << endl;
    }
};

// Template derived class
template <typename T>
class Derived : public Base<T> {
public:
    Derived(T val) : Base<T>(val) { cout << "Derived constructor called." << endl; }
    
    void display() {
        this->show();
        // Calling template member function
        this->print("Current value");
    }
};

int main() {
    Derived<int> obj(20);
    obj.display(); // Calls show() and print() from Base
    
    return 0;
}
